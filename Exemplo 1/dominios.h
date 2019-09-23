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

    void validar(string);

public:

    void setBagagem (string);

    string getBagagem() const
    {
        return Bagagem;
    }

};

class CodigoBanco
{
private:
    string CodigoBanco;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    // Metodo responsavel por validacao.
    void validar(string);  //throw (invalid_argument) -> desnecessario na declaracao

public:
    // Metodos de acesso.
    void setCodigoBanco(string);

    string getCodigoBanco() const
    {
        return CodigoBanco;
    }
};

class CodigoCarona
{
private:
    string CodigoCarona;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    // Metodo responsavel por validacao.
    void validar(string);  //throw (invalid_argument) -> desnecessario na declaracao

public:
    // Metodos de acesso.
    void setCodigoCarona(string);

    string getCodigoCarona() const
    {
        return CodigoCarona;
    }
};

class CodigoReserva
{
private:
    string CodigoReserva;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    // Metodo responsavel por validacao.
    void validar(string);  //throw (invalid_argument) -> desnecessario na declaracao

public:
    // Metodos de acesso.
    void setCodigoReserva(string);

    string getCodigoReserva() const
    {
        return CodigoReserva;
    }
};

class Estado
{
private:
    string Estado;

    const static string ESTADOS_VALIDOS[27];

    void validar(string);

public:
    //Metodos de acesso
    void setEstado(string);

    string getEstado() const
    {
        return Estado;
    }
};

#endif // DOMINIOS_H_INCLUDED
