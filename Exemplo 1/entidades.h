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

    void setUsuario (string nome, string telefone, string email,
        string senha, string cpf);

    void getUsuario(Nome *nome, Telefone *telefone,
        Email *email, Senha *senha, CPF *cpf);

};

#endif // ENTIDADES_H_INCLUDED
