#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// Declaracao de classes de dominios

class Assento
{
private:

    string Assento;

    const static string Dianteiro, Traseiro;

    void validar(string);

public:

    void setAssento (string);

    string getAssento() const
    {
        return Assento;
    }

};

class Bagagem
{
private:

    string Bagagem;
    int int_bagagem;

    void validar(string);

public:

    void setBagagem (string);

    int getBagagem() const
    {
        return int_bagagem;
    }

};


class Codigo
{
private:
    int codigo;

    const static int LIMITE = 25;

    // Metodo responsavel por valida��o.
    void validar(int);  //throw (invalid_argument) -> desnecessario na declaracao

public:
    // Metodos de acesso.
    void setCodigo(int);

    int getCodigo() const
    {
        return codigo;
    }
};

#endif // DOMINIOS_H_INCLUDED
