/**
 * @file entidades.h
 *
 * @brief Arquivo com a declara&ccedil;&atilde;o das Classes de Entidades do programa
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 */

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaracao de classes de Entidades

/**
 *  @brief Usu&aacute;rio.
 *
 *  @section a Descri&ccedil;&atilde;o
 *  Essa classe armazena os dados pessoais do usu&aacute;rio,
 *  sendo(objetos): Nome, Telefone, Email, Senha, CPF
 *
 *  @subsection Formato
 *  A atribui&ccedil;&atilde;o dos objetos devem obedecer &agrave;s suas respectivas regras
 *  de valida&ccedil;&atilde;o no n&iacute;vel de Dom&iacute;nio
 *
 */

class Usuario
{

private:

    Nome *nome;
    Telefone *telefone;
    Email *email;
    Senha *senha;
    CPF *cpf;

public:
    /**
     * @brief Construtor
     *
     * Define os objetos do Usu&aacute;rio
     *
     */
    Usuario()
    {
        this->nome = new Nome();
        this->telefone = new Telefone();
        this->email = new Email();
        this->senha = new Senha();
        this->cpf = new CPF();
    }

    /**
     * @brief Destrutor
     *
     * Deleta os objetos do Usu&aacute;rio
     *
     */
    ~Usuario()
    {
        delete this->nome;
        delete this->telefone;
        delete this->email;
        delete this->senha;
        delete this->cpf;

    }

    /**
     * Define o Nome do Usu&aacute;rio
     *
     * @param Nome*
     *
     */
    void setNome(Nome*);
    /**
     * Obt&eacute;m o Nome do Usu&aacute;rio
     *
     * @return Nome*
     *
     */
    Nome* getNome();

    /**
     * Define o Telefone do Usu&aacute;rio
     *
     * @param Telefone*
     *
     */
    void setTelefone(Telefone*);
    /**
     * Obt&eacute;m o Telefone do Usu&aacute;rio
     *
     * @return Telefone*
     *
     */
    Telefone* getTelefone();

    /**
     * Define o Email do Usu&aacute;rio
     *
     * @param Email*
     *
     */
    void setEmail(Email*);
    /**
     * Obt&eacute;m o Email do Usu&aacute;rio
     *
     * @return Email*
     *
     */
    Email* getEmail();

    /**
     * Define a Senha do Usu&aacute;rio
     *
     * @param Senha*
     *
     */
    void setSenha(Senha*);
    /**
     * Obt&eacute;m a Senha do Usu&aacute;rio
     *
     * @return Senha*
     *
     */
    Senha* getSenha();

    /**
     * Define o CPF do Usu&aacute;rio
     *
     * @param CPF*
     *
     */
    void setCPF(CPF*);
    /**
     * Obt&eacute;m o CPF do Usu&aacute;rio
     *
     * @return CPF*
     *
     */
    CPF* getCPF();
};

/**
 *  @brief Carona
 *
 *  @section a Descri&ccedil;&atilde;o
 *  Essa classe armazena os dados de Carona como (objetos): Codigo de Carona, Cidade (origem e destino),
 *  Estado (origem e destino), Data, Duracao, Vagas e  Pre&ccedil;o
 *
 *  @subsection Formato
 *  A atribui&ccedil;&atilde;o dos objetos devem obedecer &agrave;s suas respectivas regras de valida&ccedil;&atilde;o
 *  no n&iacute;vel de Dom&iacute;nio
 *
 */

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
    /**
     * @brief Construtor
     *
     * Define os objetos da Carona
     *
     */
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

    /**
     * @brief Destrutor
     *
     * Deleta os objetos da Carona
     *
     */
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

    /**
     * Define o C&oacute;digo da Carona
     *
     * @param CodigoCarona*
     *
     */
    void setCodigo(CodigoCarona*);
    /**
     * Obt&eacute;m o C&oacute;digo da Carona
     *
     * @return CodigoCarona*
     *
     */
    CodigoCarona* getCodigo();

    /**
     * Define a Cidade de origem da Carona
     *
     * @param Cidade*
     *
     */
    void setCidadeOrigem(Cidade*);
    /**
     * Obt&eacute;m a Cidade de origem da Carona
     *
     * @return Cidade*
     *
     */
    Cidade* getCidadeOrigem();

    /**
     * Define o Estado de origem da Carona
     *
     * @param Estado*
     *
     */
    void setEstadoOrigem(Estado*);
    /**
     * Obt&eacute;m o Estado de origem da Carona
     *
     * @return Estado*
     *
     */
    Estado* getEstadoOrigem();

    /**
     * Define a Cidade de destino da Carona
     *
     * @param Cidade*
     *
     */
    void setCidadeDestino(Cidade*);
    /**
     * Obt&eacute;m a Cidade de destino da Carona
     *
     * @return Cidade*
     *
     */
    Cidade* getCidadeDestino();

    /**
     * Define o Estado de origem da Carona
     *
     * @param Estado*
     *
     */
    void setEstadoDestino(Estado*);
    /**
     * Obt&eacute;m o Estado de origem da Carona
     *
     * @return Estado*
     *
     */
    Estado* getEstadoDestino();

    /**
     * Define a Data da Carona
     *
     * @param Data*
     *
     */
    void setData(Data*);
    /**
     * Obt&eacute;m a Data da Carona
     *
     * @return Data*
     *
     */
    Data* getData();

    /**
     * Define a Dura&ccedil;&atilde;o da Carona
     *
     * @param Duracao*
     *
     */
    void setDuracao(Duracao*);
    /**
     * Obt&eacute;m a Dura&ccedil;&atilde;o da Carona
     *
     * @return Duracao*
     *
     */
    Duracao* getDuracao();

    /**
     * Define as Vagas da Carona
     *
     * @param Vagas*
     *
     */
    void setVagas(Vagas*);
    /**
     * Obt&eacute;m as Vagas da Carona
     *
     * @return Vagas*
     *
     */
    Vagas* getVagas();

    /**
     * Define o Pre&ccedil;o da Carona
     *
     * @param Preco*
     *
     */
    void setPreco(Preco*);
    /**
     * Obt&eacute;m o Pre&ccedil;o da Carona
     *
     * @return Preco*
     *
     */
    Preco* getPreco();

};

/**
 *  @brief Reserva
 *
 *  @section a Descri&ccedil;&atilde;o
 *  Essa classe armazena dados da Reserva como (objetos): C&oacute;digo de Reserva, Assento e Bagagem
 *
 *  @subsection Formato
 *  A atribui&ccedil;&atilde;o dos objetos devem obedecer &agrave;s suas respectivas regras de valida&ccedil;&atilde;o
 *  no n&iacute;vel de Dom&iacute;nio
 *
 */

class Reserva
{
private:

    CodigoReserva *codigo;
    Assento *assento;
    Bagagem *bagagem;

public:
    /**
     * @brief Construtor
     *
     * Define os objetos da Reserva
     *
     */
    Reserva()
    {
        this->codigo = new CodigoReserva();
        this->assento = new Assento();
        this->bagagem = new Bagagem();
    }
    /**
     * @brief Destrutor
     *
     * Deleta os objetos da Reserva
     *
     */
    ~Reserva()
    {
        delete this->codigo;
        delete this->assento;
        delete this->bagagem;
    }

    /**
     * Define o C&oacute;digo da Reserva
     *
     * @param CodigoReserva*
     *
     */
    void setCodigo(CodigoReserva*);
    /**
     * Obt&eacute;m o C&oacute;digo da Reserva
     *
     * @return CodigoReserva*
     *
     */
    CodigoReserva* getCodigo();

    /**
     * Define o Assento da Reserva
     *
     * @param Assento*
     *
     */
    void setAssento(Assento*);
    /**
     * Obt&eacute;m o Assento da Reserva
     *
     * @return Assento*
     *
     */
    Assento* getAssento();

    /**
     * Define a quantidade de Bagagens da Reserva
     *
     * @param Bagagem*
     *
     */
    void setBagagem(Bagagem*);
    /**
     * Obt&eacute;m a quantidade de Bagagens da Reserva
     *
     * @return Bagagem*
     *
     */
    Bagagem* getBagagem();

};

/**
 *  @brief Conta
 *
 *  @section a Descri&ccedil;&atilde;o
 *  Essa classe armazena dados da Conta do Usu&aacute;rio como (objetos): Codigo de Banco, Ag&ecirc;ncia e N&uacute;mero de Conta
 *  @subsection Formato
 *  A atribui&ccedil;&atilde;o dos objetos devem obedecer &agrave;s suas respectivas regras de valida&ccedil;&atilde;o no n&iacute;vel de Dom&iacute;nio
 *
 */

class Conta
{
private:

    CodigoBanco *banco;
    Agencia *agencia;
    NumeroConta *numero;

public:
    /**
     * @brief Construtor
     *
     * Define os objetos da Conta
     *
     */
    Conta()
    {
        this->banco = new CodigoBanco();
        this->agencia = new Agencia();
        this->numero = new NumeroConta();
    }

    /**
     * @brief Destrutor
     *
     * Deleta os objetos da Conta
     *
     */
    ~Conta()
    {
        delete this->banco;
        delete this->agencia;
        delete this->numero;
    }

    /**
     * Define o C&oacute;digo de Banco da Conta
     *
     * @param CodigoBanco*
     *
     */
    void setBanco(CodigoBanco*);
    /**
     * Obt&eacute;m o C&oacute;digo de Banco da Conta
     *
     * @return CodigoBanco*
     *
     */
    CodigoBanco* getBanco();

    /**
     * Define a Ag&ecirc;ncia da Conta
     *
     * @param Agencia*
     *
     */
    void setAgencia(Agencia*);
    /**
     * Obt&eacute;m a Ag&ecirc;ncia da Conta
     *
     * @return Agencia*
     *
     */
    Agencia* getAgencia();

    /**
     * Define o N&uacute;mero da Conta
     *
     * @param NumeroConta*
     *
     */
    void setNumero(NumeroConta*);
    /**
     * Obt&eacute;m o N&uacute;mero da Conta
     *
     * @return NumeroConta*
     *
     */
    NumeroConta* getNumero();

};
//==================================================================================
// Declarações de classes que modelam resultados.

class Resultado {

protected:
    int valor;

public:

    // Declarações de possíveis resultados.

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setValor(int valor){
        this->valor = valor;
    }

    int getValor() const {
        return valor;
    }
};

class ResultadoAutenticacao:public Resultado {

private:
    Matricula matricula;

public:
    void setMatricula(const Matricula &matricula){      // passagem por referência.
        this->matricula = matricula;
    }

    Matricula getMatricula() const {
        return matricula;
    }
};

#endif // ENTIDADES_H_INCLUDED
