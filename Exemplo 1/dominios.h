#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <map>
#include <ctype.h>

using namespace std;

// Declaracao de classes de dominios

class Assento
{
private:

    string assento;

    const static string Dianteiro, Traseiro;

    void validar(string);

public:
    void setAssento (string);

    string getAssento() const
    {
        return assento;
    }

    //Assento(string assento);
    //Assento();

};

class Bagagem
{
private:

    string bagagem;

    const static int BAGAGEM_MIN;
    const static int BAGAGEM_MAX;

    void validar(string);

public:
    void setBagagem (string);

    string getBagagem() const
    {
        return bagagem;
    }

};

class CodigoBanco
{
private:
    string codigoBanco;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    void validar(string);

public:
    void setCodigoBanco(string);

    string getCodigoBanco() const
    {
        return codigoBanco;
    }
};

class CodigoCarona
{
private:
    string codigoCarona;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    void validar(string);

public:
    void setCodigoCarona(string);

    string getCodigoCarona() const
    {
        return codigoCarona;
    }
};

class CodigoReserva
{
private:
    string codigoReserva;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    void validar(string);

public:
    void setCodigoReserva(string);

    string getCodigoReserva() const
    {
        return codigoReserva;
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

class CPF
{
private:
    string cpf;

    const static int TAMANHO;

    void validar(string);

public:

    void setCPF (string);

    string getCPF() const
    {
        return cpf;
    }
};

class Data
{
private:
    const static int LIMITE = 6;

    char data[LIMITE+1];

    void validar(int);

public:
    void setData(string);

    string getData()
    {
        return data;
    }

};

class Duracao
{
private:

    string duracao;

    const static int DURACAO_MIN;
    const static int DURACAO_MAX;

    void validar(string);

public:
    void setDuracao (string);

    string getDuracao() const
    {
        return duracao;
    }

};

class Estado
{
private:
    string estado;

    const static string ESTADOS_VALIDOS[27];

    void validar(string);

public:
    void setEstado(string);

    string getEstado() const
    {
        return estado;
    }
};

class Email
{
private:
    string email;

    const static int TAMANHO_MAX;

    void validar(string);

public:
    void setEmail(string);

    string getEmail() const
    {
        return email;
    }
};

class Nome
{
private:

    string nome;

    const static unsigned int TAMANHO_MAX;
    const static unsigned int TAMANHO_MIN;

    void validar(string);

public:
    void setNome(string);

    string getNome()
    {
        return nome;
    }
};

class Agencia
{
private:
    string agencia;

    const static int TAMANHO;

    void validar(string);

public:
    void setAgencia(string);

    string getAgencia() const
    {
        return agencia;
    }
};

class NumeroConta
{
private:
    string conta;

    const static int TAMANHO;

    void validar(string);

public:
    void setConta(string);

    string getConta() const
    {
        return conta;
    }
};

class Preco
{
private:

    string preco;

    const static float PRECO_MIN;
    const static float PRECO_MAX;

    void validar(string);

public:
    void setPreco (string);

    string getPreco() const
    {
        return preco;
    }

};

class Telefone
{
private:

    string telefone;

    const static unsigned int TAMANHO;

    void validar(string);

public:
    void setTelefone(string);

    string getTelefone()
    {
        return telefone;
    }
};

class Senha
{
private:
    string senha;

    const static int TAMANHO;

    void validar(string);

public:
    void setSenha(string);

    string getSenha() const
    {
        return senha;
    }
};

class Vagas
{
private:

    string vagas;

    const static int VAGAS_MIN;
    const static int VAGAS_MAX;

    void validar(string);

public:
    void setVagas (string);

    string getVagas() const
    {
        return vagas;
    }

};

#endif // DOMINIOS_H_INCLUDED
