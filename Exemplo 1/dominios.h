#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

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

    const static int BAGAGEM_MIN;
    const static int BAGAGEM_MAX;

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

    void validar(string);

public:
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

    void validar(string);

public:
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

    void validar(string);

public:
    void setCodigoReserva(string);

    string getCodigoReserva() const
    {
        return CodigoReserva;
    }
};

class Duracao
{
private:

    string Duracao;

    const static int DURACAO_MIN;
    const static int DURACAO_MAX;

    void validar(string);

public:
    void setDuracao (string);

    string getDuracao() const
    {
        return Duracao;
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

class Preco
{
private:

    string Preco;

    const static float PRECO_MIN;
    const static float PRECO_MAX;

    void validar(string);

public:
    void setPreco (string);

    string getPreco() const
    {
        return Preco;
    }

};

#endif // DOMINIOS_H_INCLUDED
