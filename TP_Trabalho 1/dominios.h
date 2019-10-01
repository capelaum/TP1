/**
 * @file dominios.h
 *
 * @brief Arquivo com a declara&ccedil;&atilde;o das Classes de Domin&iacute;os do programa
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 *
 */

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

/**
 *  @brief Assento
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena uma letra que representa o Assento escolhido,
 *  o qual pode ser dianteiro (D) ou traseiro (T)
 *
 *  @subsection Formato
 *  Letra D ou T
 */

class Assento
{
private:

    string assento;

    const static string Dianteiro, Traseiro;

    void validar(string);

public:
    /**
     * Define a escolha de Assento - D ou T
     *
     * @param string (texto)
     *
     */
    void setAssento (string);

    /**
     * Obt&eacute;m o Assento
     *
     * @return string (D ou T)
     *
     */
    string getAssento() const
    {
        return assento;
    }
};

/**
 *  @brief Bagagem
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o n&uacute;mero de bagagens (0 a 4)
 *
 *  @subsection Formato
 *  0,1,2,3 ou 4
 */

class Bagagem
{
private:

    string bagagem;

    const static int BAGAGEM_MIN;
    const static int BAGAGEM_MAX;

    void validar(string);

public:
    /**
     * Define a quantidade de bagagens
     *
     * @param string (texto)
     *
     */
    void setBagagem (string);

    /**
     * Obt&eacute;m a quantidade de bagagens
     *
     * @return string (valor de 0 a 4)
     *
     */
    string getBagagem() const
    {
        return bagagem;
    }
};

/**
 *  @brief C&oacute;digo de Banco
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o n&uacute;mero do c&oacute;digo de banco
 *
 *  @subsection Formato
 *  XXX onde X &eacute; d&iacute;gito (0-9)
 */

class CodigoBanco
{
private:
    string codigoBanco;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    void validar(string);

public:
    /**
     * Define o c&oacute;digo de banco
     *
     * @param string (texto)
     *
     */
    void setCodigoBanco(string);

    /**
     * Obt&eacute;m o c&oacute;digo de banco
     *
     * @return string XXX (0-9)
     *
     */
    string getCodigoBanco() const
    {
        return codigoBanco;
    }
};

/**
 *  @brief C&oacute;digo de Carona
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o n&uacute;mero do c&oacute;digo de Carona
 *
 *  @subsection Formato
 *  XXXX onde X &eacute; d&iacute;gito (0-9)
 */

class CodigoCarona
{
private:
    string codigoCarona;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    void validar(string);

public:
    /**
     * Define o c&oacute;digo de carona
     *
     * @param string (texto)
     *
     */
    void setCodigoCarona(string);

    /**
     * Obt&eacute;m o c&oacute;digo de carona
     *
     * @return string XXXX (0-9)
     *
     */
    string getCodigoCarona() const
    {
        return codigoCarona;
    }
};

/**
 *  @brief C&oacute;digo de Reserva
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o n&uacute;mero do c&oacute;digo de Reserva
 *
 *  @subsection Formato
 *  XXXXX onde X &eacute; d&iacute;gito (0-9)
 */

class CodigoReserva
{
private:
    string codigoReserva;

    const static int QUANTIDADE_NUMEROS;
    const static int MENOR_VALOR_VALIDO;
    const static int MAIOR_VALOR_VALIDO;

    void validar(string);

public:
    /**
     * Define o c&oacute;digo de reserva
     *
     * @param string (texto)
     *
     */
    void setCodigoReserva(string);

    /**
     * Obt&eacute;m o c&oacute;digo de reserva
     *
     * @return string XXXXX (0-9)
     *
     */
    string getCodigoReserva() const
    {
        return codigoReserva;
    }
};

/**
 *  @brief Cidade
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena a cidade escolhida (origem ou destino)
 *
 *  @subsection Formato
 *  De 1 a 10 letras (espa&ccedil;o/ponto/letras),
 *  n&atilde;o &eacute; permitido 2 espa&ccedil;os seguidos
 */

class Cidade
{
private:
    const static int TAMANHO_ESPERADO = 10;

    char cidade[TAMANHO_ESPERADO+1];

    void validar(string);

public:
    /**
     * Define a cidade
     *
     * @param string (texto)
     *
     */
    void setCidade (string);

    /**
     * Obt&eacute;m a cidade
     *
     * @return string (Cidade)
     *
     */
    string getCidade() const
    {
        return cidade;
    }
};

/**
 *  @brief CPF
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o cpf do usu&aacute;rio
 *
 *  @subsection Formato
 *  XXXXXXXXX-YY (0-9), d&iacute;gitos verficadores Y calculados pelo algoritmo m&oacute;dulo 11
 */

class CPF
{
private:
    string cpf;

    const static int TAMANHO;

    void validar(string);

public:
    /**
     * Define o cpf
     *
     * @param string (texto)
     *
     */
    void setCPF (string);

    /**
     * Obt&eacute;m o cpf
     *
     * @return string XXX XXX XXX-YY (0-9)
     *
     */
    string getCPF() const
    {
        return cpf;
    }
};

/**
 *  @brief Data
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena a data
 *
 *  @subsection Formato
 *  DD/MM/AAAA , onde DD &eacute; n&uacute;mero (1-31), MM &eacute;
 *  n&uacute;mero (1-12), AAAA &eacute; n&uacute;mero (2000 a 2099).
 *  A data deve considerar a ocorr&ecirc;ncia de anos bissextos
 */

class Data
{
private:
    string data;

    const static int TAMANHO_MAX;

    void validar(string);

public:
    /**
     * Define a data
     *
     * @param string (texto)
     *
     */
    void setData(string);

    /**
     * Obt&eacute;m a data
     *
     * @return String DD/MM/AAAA
     *
     */
    string getData()
    {
        return data;
    }

};

/**
 *  @brief Dura&ccedil;&atilde;o
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena a dura&ccedil;&atilde;o
 *
 *  @subsection Formato
 *  1 a 48 horas
 */

class Duracao
{
private:

    string duracao;

    const static int DURACAO_MIN;
    const static int DURACAO_MAX;

    void validar(string);

public:
    /**
     * Define a dura&ccedil;&atilde;o
     *
     * @param string (texto)
     *
     */
    void setDuracao (string);

    /**
     * Obt&eacute;m a dura&ccedil;&atilde;o
     *
     * @return string (valor de 1 a 48)
     *
     */
    string getDuracao() const
    {
        return duracao;
    }

};

/**
 *  @brief Estado
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o Estado (origem ou destino)
 *
 *  @subsection Formato
 *  AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA, PB, PR, PE,
 *  PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO
 */

class Estado
{
private:
    string estado;

    const static string ESTADOS_VALIDOS[27];

    void validar(string);

public:
    /**
     * Define o Estado
     *
     * @param string (texto)
     *
     */
    void setEstado(string);

    /**
     * Obt&eacute;m o Estado
     *
     * @return string (Estados brasileiros)
     *
     */
    string getEstado() const
    {
        return estado;
    }
};

/**
 *  @brief Email
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o email do usu&aacute;rio
 *
 *  @subsection Formato
 *  Pode ter at&eacute; 20 caracteres (a-z) ou ponto (.)
 *  Nem a parte local podem come&ccedilar ou terminar em ponto
 *  N&atildeo pode haver mais de um arroba (@) nem dois pontos em sequ&ecirc;ncia
 *
 */

class Email
{
private:
    string email;

    const static int TAMANHO_MAX;

    void validar(string);

public:
    /**
     * Define o email
     *
     * @param string (texto)
     *
     */
    void setEmail(string);

    /**
     * Obt&eacute;m o email
     *
     * @return string (email)
     *
     */
    string getEmail() const
    {
        return email;
    }
};

/**
 *  @brief Nome
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o nome do usu&aacute;rio
 *
 *  @subsection Formato
 *  De 1 a 20 caracteres podendo ser letra, ponto ou espa&ccedil;o.
 *  Pelo menos 1 caractere &eacute; letra, antes de ponto deve haver letra e n&atilde;o h&aacute; espa&ccedil;os
 *  em sequ&ecirc;ncia.
 */

class Nome
{
private:

    string nome;

    const static unsigned int TAMANHO_MAX;
    const static unsigned int TAMANHO_MIN;

    void validar(string);

public:
    /**
     * Define o nome
     *
     * @param string (texto)
     *
     */
    void setNome(string);

    /**
     * Obt&eacute;m o nome
     *
     * @return string (nome)
     *
     */
    string getNome()
    {
        return nome;
    }
};

/**
 *  @brief Ag&ecirc;ncia
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o n&uacute;mero de ag&ecirc;ncia
 *
 *  @subsection Formato
 *  XXXX-Y onde X &eacute; d&iacute;gito (0-9) e
 *  Y &eacute; d&iacute;gito verificador
 *  calculado por meio do algor&iacute;timo de Luhn
 *
 */

class Agencia
{
private:
    string agencia;

    const static int TAMANHO;

    void validar(string);

public:
    /**
     * Define a ag&ecirc;ncia
     *
     * @param string (texto)
     *
     */
    void setAgencia(string);

    /**
     * Obt&eacute;m a ag&ecirc;ncia
     *
     * @return string XXXX-Y (0-9)
     *
     */
    string getAgencia() const
    {
        return agencia;
    }
};

/**
 *  @brief NumeroConta
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o n&uacute;mero de conta
 *
 *  @subsection Formato
 *  XXXXX-Y onde X &eacute; d&iacute;gito (0-9) e
 *  Y &eacute; d&iacute;gito verificador
 *  calculado por meio do algor&iacute;timo de Luhn
 *
 */

class NumeroConta
{
private:
    string conta;

    const static int TAMANHO;

    void validar(string);

public:
    /**
     * Define o n&uacute;mero de conta
     *
     * @param string (texto)
     *
     */
    void setConta(string);

    /**
     * Obt&eacute;m o n&uacute;mero de conta
     *
     * @return string XXXXX-Y (0-9)
     *
     */
    string getConta() const
    {
        return conta;
    }
};

/**
 *  @brief Pre&ccedil;o
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o pre&ccedil;o
 *
 *  @subsection Formato
 *  Valores decimais de 1,00 a 5,00
 *
 */

class Preco
{
private:

    string preco;

    const static float PRECO_MIN;
    const static float PRECO_MAX;

    void validar(string);

public:
    /**
     * Define o pre&ccedil;o
     *
     * @param string (texto)
     *
     */
    void setPreco (string);

    /**
     * Obt&eacute;m o pre&ccedil;o
     *
     * @return string (valor de 1,00 a 5000,00)
     *
     */
    string getPreco() const
    {
        return preco;
    }

};

/**
 *  @brief Telefone
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o telefone do usu&aacute;rio
 *
 *  @subsection Formato
 *  XX-YY-ZZZZZZZZZ onde cada X,Y e Z &eacute; d&iacute;gito (0-9)
 *  Valor XX e YY n&atilde;o podem ser 00 e ZZZZZZZZZ n&atilde;o pode ser 000000000
 */

class Telefone
{
private:

    string telefone;

    const static unsigned int TAMANHO;

    void validar(string);

public:
    /**
     * Define o telefone
     *
     * @param string (texto)
     *
     */
    void setTelefone(string);

    /**
     * Obt&eacute;m o telefone
     *
     * @return string XX-YY-ZZZZZZZZZ (0-9)
     *
     */
    string getTelefone()
    {
        return telefone;
    }
};

/**
 *  @brief Senha
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena a senha do usu&aacute;rio
 *
 *  @subsection Formato
 *  XXXX onde X pode ser letra (a - z ou A - Z), d&iacute;gito (0 - 9), # , $ ,
 *  % ou &. A senha tem que ter pelo menos uma letra e um d�gito. N&atilde;o podem
 *  haver caracteres repetidos.
 */

class Senha
{
private:
    string senha;

    const static int TAMANHO;

    void validar(string);

public:
    /**
     * Define a senha
     *
     * @param string (texto)
     *
     */
    void setSenha(string);

    /**
     * Obt&eacute;m a senha
     *
     * @return string (senha)
     *
     */
    string getSenha() const
    {
        return senha;
    }
};

/**
 *  @brief Pre&ccedil;o
 *
 *  @section a Descri&ccedil;&atilde;o
 *
 *  Essa classe armazena o pre&ccedil;o
 *
 *  @subsection Formato
 *  Valores de 0 a 4
 *
 */

class Vagas
{
private:

    string vagas;

    const static int VAGAS_MIN;
    const static int VAGAS_MAX;

    void validar(string);

public:
    /**
     * Define o n&uacute;mero de vagas
     *
     * @param string (texto)
     *
     */
    void setVagas (string);

    /**
     * Obt&eacute;m o n&uacute;mero de vagas
     *
     * @return string (valor de 0 a 4)
     *
     */
    string getVagas() const
    {
        return vagas;
    }
};

#endif // DOMINIOS_H_INCLUDED
