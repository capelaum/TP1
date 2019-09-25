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

    Assento assento;

public:

    void setAssento(const Assento &assento)
    {
        this->assento = assento;
    }

    Assento getAssento() const
    {
        return assento;
    }

};

#endif // ENTIDADES_H_INCLUDED
