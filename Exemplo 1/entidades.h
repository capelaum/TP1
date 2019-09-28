#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Definir atributos como objetos de classes de dominios
// Fazer um set e get para cada atributo

// Declaracao de classes de Entidades

class Usuario
{

private:

    Nome nome;
    Telefone telefone;
    Email email;
    Senha senha;
    CPF cpf;

public:

    void setNome(const Nome &nome)
    {
        this->nome = nome;
    }

    Nome getNome() const
    {
        return nome;
    }

    void setTelefone(const Telefone &telefone)
    {
        this->telefone = telefone;
    }

    Telefone getTelefone() const
    {
        return telefone;
    }

    void setEmail(const Email &email)
    {
        this->email = email;
    }

    Email getEmail() const
    {
        return email;
    }

    void setSenha(const Senha &senha)
    {
        this->senha = senha;
    }

    Senha getSenha() const
    {
        return senha;
    }

    void setCPF(const CPF &cpf)
    {
        this->cpf = cpf;
    }

    CPF getCPF() const
    {
        return cpf;
    }
};

#endif // ENTIDADES_H_INCLUDED
