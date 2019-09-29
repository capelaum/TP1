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

    void setNome(Nome*);
    Nome getNome();

    void setTelefone(Telefone*);
    Telefone getTelefone();

    void setEmail(Email*);
    Email getEmail();

    void setSenha(Senha*);
    Senha getSenha();

    void setCPF(CPF*);
    CPF getCPF();
};

class Carona
{

private:

    CodigoCarona *codigo;
    Cidade *cidadeOrigem;
    Estado *estadoOrigem;
    Cidade *cidadeDestino;
    Estado *estadoDestino;
    Data *data;
    Duracao *duracao;
    Vagas *vagas;
    Preco *preco;

public:

    void setCodigo(CodigoCarona*);
    CodigoCarona getCodigo();

    void setCidadeOrigem(Cidade*);
    Cidade getCidadeOrigem();

    void setEstadoOrigem(Estado*);
    Estado getEstadoOrigem();

    void setCidadeDestino(Cidade*);
    Cidade getCidadeDestino();

    void setEstadoDestino(Estado*);
    Estado getEstadoDestino();

    void setData(Data*);
    Data getData();

    void setDuracao(Duracao*);
    Duracao getDuracao();

    void setVagas(Vagas*);
    Vagas getVagas();

    void setPreco(Preco*);
    Preco getPreco();

};

class Reserva
{
private:

    CodigoReserva *codigo;
    Assento *assento;
    Bagagem *bagagem;

public:

    void setCodigo(CodigoReserva*);
    CodigoReserva getCodigo();

    void setAssento(Assento*);
    Assento getAssento();

    void setBagagem(Bagagem*);
    Bagagem getBagagem();

};

class Conta
{
private:

    CodigoBanco *banco;
    Agencia *agencia;
    NumeroConta *numero;

public:

    void setBanco(CodigoBanco*);
    CodigoBanco getBanco();

    void setAgencia(Agencia*);
    Agencia getAgencia();

    void setNumero(NumeroConta*);
    NumeroConta getNumero();

};

#endif // ENTIDADES_H_INCLUDED
