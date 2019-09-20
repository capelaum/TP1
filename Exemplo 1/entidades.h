#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Definir atributos como objetos de classes de dominios
// Fazer um set e get para cada atributo

// Declaracao de classe.

class Projeto
{

private:

    Codigo codigo;

public:

    void setCodigo(const Codigo &codigo)
    {
        this->codigo = codigo;
    }

    Codigo getCodigo() const
    {
        return codigo;
    }

};

#endif // ENTIDADES_H_INCLUDED
