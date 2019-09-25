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

class Cidade
{
private:

    const static int TAMANHO_ESPERADO = 10;

    char cidade[TAMANHO_ESPERADO+1];

    void validar(string);

public:
    void setCidade (string);

    string getCidade() const
    {
        return cidade;
    }
};

class Data
{
private:
    const static int LIMITE = 6;

    char data[LIMITE+1];

    // temos que checar se a data tem 6 caracteres
    // formato: DD/MM/AA onde MM <= 12, AA <= 99 e >= 00, DD <= 31
    // deve considerar anos bissextos
    // vamos supor que n�o ser�o criados eventos para o passado ou para uma data que n�o pertence a este s�culo, logo, ao se declarar o ano como "99", consideramos 2099.
    // a entrada: se queremos expressar 25/12/2098, devemos escrever 251298 como a entrada (sem barras para facilitar, no output final se fara print com as divisoes)

    void validar(int) throw (invalid_argument);

public:

    void setData (string) throw (invalid_argument);

    string getData()
    {
        return data;
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

class Vagas
{
private:

    string Vagas;

    const static int VAGAS_MIN;
    const static int VAGAS_MAX;

    void validar(string);

public:
    void setVagas (string);

    string getVagas() const
    {
        return Vagas;
    }

};

#endif // DOMINIOS_H_INCLUDED
