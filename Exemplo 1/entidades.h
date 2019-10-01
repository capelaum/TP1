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

    Usuario()
    {
        this->nome = new Nome();
        this->telefone = new Telefone();
        this->email = new Email();
        this->senha = new Senha();
        this->cpf = new CPF();
    }

    ~Usuario()
    {
        delete this->nome;
        delete this->telefone;
        delete this->email;
        delete this->senha;
        delete this->cpf;

    }

    void setNome(Nome*);
    Nome* getNome();

    void setTelefone(Telefone*);
    Telefone* getTelefone();

    void setEmail(Email*);
    Email* getEmail();

    void setSenha(Senha*);
    Senha* getSenha();

    void setCPF(CPF*);
    CPF* getCPF();
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

    Carona()
    {
        this->codigo = new CodigoCarona();
        this->cidadeOrigem = new Cidade();
        this->cidadeDestino = new Cidade();
        this->estadoOrigem = new Estado();
        this->estadoDestino = new Estado();
        this->data = new Data();
        this->duracao = new Duracao();
        this->vagas = new Vagas();
        this->preco = new Preco();
    }

    ~Carona()
    {
        delete this->codigo;
        delete this->cidadeOrigem;
        delete this->cidadeDestino;
        delete this->estadoOrigem;
        delete this->estadoDestino;
        delete this->data;
        delete this->duracao;
        delete this->vagas;
        delete this->preco;
    }

    void setCodigo(CodigoCarona*);
    CodigoCarona* getCodigo();

    void setCidadeOrigem(Cidade*);
    Cidade* getCidadeOrigem();

    void setEstadoOrigem(Estado*);
    Estado* getEstadoOrigem();

    void setCidadeDestino(Cidade*);
    Cidade* getCidadeDestino();

    void setEstadoDestino(Estado*);
    Estado* getEstadoDestino();

    void setData(Data*);
    Data* getData();

    void setDuracao(Duracao*);
    Duracao* getDuracao();

    void setVagas(Vagas*);
    Vagas* getVagas();

    void setPreco(Preco*);
    Preco* getPreco();

};

class Reserva
{
private:

    CodigoReserva *codigo;
    Assento *assento;
    Bagagem *bagagem;

public:

    Reserva()
    {
        this->codigo = new CodigoReserva();
        this->assento = new Assento();
        this->bagagem = new Bagagem();
    }

    ~Reserva()
    {
        delete this->codigo;
        delete this->assento;
        delete this->bagagem;
    }

    void setCodigo(CodigoReserva*);
    CodigoReserva* getCodigo();

    void setAssento(Assento*);
    Assento* getAssento();

    void setBagagem(Bagagem*);
    Bagagem* getBagagem();

};

class Conta
{
private:

    CodigoBanco *banco;
    Agencia *agencia;
    NumeroConta *numero;

public:

    Conta()
    {
        this->banco = new CodigoBanco();
        this->agencia = new Agencia();
        this->numero = new NumeroConta();
    }

    ~Conta()
    {
        delete this->banco;
        delete this->agencia;
        delete this->numero;
    }

    void setBanco(CodigoBanco*);
    CodigoBanco* getBanco();

    void setAgencia(Agencia*);
    Agencia* getAgencia();

    void setNumero(NumeroConta*);
    NumeroConta* getNumero();

};

#endif // ENTIDADES_H_INCLUDED
