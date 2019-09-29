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

    Nome *nome;
    Telefone *telefone;
    Email *email;
    Senha *senha;
    CPF *cpf;

public:

    void setNome(Nome *nome);

    Nome getNome();

    void setTelefone(Telefone *telefone);

    Telefone getTelefone();

    void setEmail(Email* email);

    Email getEmail();

    void setSenha(Senha* senha);

    Senha getSenha();

    void setCPF(CPF *cpf);

    CPF getCPF();
};

#endif // ENTIDADES_H_INCLUDED
