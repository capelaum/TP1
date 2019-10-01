/**
 * @file testes.h
 *
 * @brief Arquivo com a declara&ccedil;&atilde;o  das classes de Testes Unit&aacute;rios do programa
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 *
 */

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

// Declaração de Classes de Testes Unitarios

// Teste Unitario para classe Assento

class TUAssento
{
private:

    // Definições de constantes para evitar numeros mágicos
    const string DIANTEIRO_VALIDO = "D";
    const string TRASEIRO_VALIDO  = "T";

    const string DIANTEIRO_INVALIDO = "X";
    const string TRASEIRO_INVALIDO  = "Y";

    // Referência (ponteiro) para o objeto a ser testado
    Assento* assento;

    // Estado do teste.
    int estado;

    // Declarações de métodos.
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Declarações de métodos.
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Bagagem

class TUBagagem
{
private:

    const string VALOR_VALIDO = "2";
    const string VALOR_INVALIDO = "20";

    Bagagem *bagagem;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para CodigoBanco

class TUCodigoBanco
{
private:

    // Definições de constantes para evitar numeros mágicos
    const string VALOR_VALIDO = "200";
    const string VALOR_INVALIDO = "-55";

    CodigoBanco *codigo_banco;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
//==================================================================================
// Teste Unitario para CodigoCarona

class TUCodigoCarona
{
private:

    const string VALOR_VALIDO = "2000";
    const string VALOR_INVALIDO = "-555";

    CodigoCarona *codigo_carona;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
//==================================================================================
// Teste Unitario para CodigoReserva

class TUCodigoReserva
{
private:

    const string VALOR_VALIDO = "20000";
    const string VALOR_INVALIDO = "-5555";

    CodigoReserva *codigo_reserva;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
//==================================================================================
// Teste Unitario para Cidade

class TUCidade
{
private:

    const string VALOR_VALIDO = "Juiz De F.";
    const string VALOR_INVALIDO = "ABRA  DA.  CADABRA";

    Cidade *cidade;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
//==================================================================================
// Teste Unitario para CPF

class TUCPF
{
private:

    const string CPF_VALIDO = "047130041-11";
    const string CPF_INVALIDO = "047130041-77";

    CPF *cpf;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
//==================================================================================
// Teste Unitario para Data

class TUData
{
private:

    const string VALOR_VALIDO = "28/02/2098";
    const string VALOR_INVALIDO = "4513/89";

    Data *data;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
//==================================================================================
// Teste Unitario para Classe Duracao

class TUDuracao
{
private:

    const string VALOR_VALIDO = "20";
    const string VALOR_INVALIDO = "0";

    Duracao *duracao;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Estado

class TUEstado
{
private:

    const string ESTADO_VALIDO = "DF";
    const string ESTADO_INVALIDO = "KK";

    Estado *estado;

    int estado_teste;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Email

class TUEmail
{
private:

    const string EMAIL_VALIDO = "capelaum@gmail.com";
    const string EMAIL_INVALIDO = "capelaum@gmail..com@";

    Email *email;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Nome

class TUNome
{
private:

    const string VALOR_VALIDO = "Jose da Silva";
    const string VALOR_INVALIDO = "Nome .Errado";

    Nome *nome;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Agencia

class TUAgencia
{
private:

    const string AGENCIA_VALIDA = "3590-7";
    const string AGENCIA_INVALIDA = "2615-7";

    Agencia *agencia;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Conta

class TUNumeroConta
{
private:

    const string CONTA_VALIDA = "261533-4";
    const string CONTA_INVALIDA = "261533-7";

    NumeroConta *conta;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Preco

class TUPreco
{
private:

    const string VALOR_VALIDO = "5000,00";
    const string VALOR_INVALIDO = "0,00";

    Preco *preco;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Telefone

class TUTelefone
{
private:

    const string VALOR_VALIDO = "55-61-982217987";
    const string VALOR_INVALIDO = "00-00-000000000";

    Telefone *telefone;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Senha

class TUSenha
{
private:

    const string SENHA_VALIDA = "A#$45";
    const string SENHA_INVALIDA = "A#BCD";

    Senha *senha;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Vagas

class TUVagas
{
private:

    const string VALOR_VALIDO = "2";
    const string VALOR_INVALIDO = "20";

    Vagas *vagas;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};


//==================================================================================
// Teste Unitario para Classe de Entidade USUARIO


class TUUsuario
{
private:

    const string NOME_VALIDO = "Rafael Barbosa";
    const string TELEFONE_VALIDO = "55-61-982217987";
    const string EMAIL_VALIDO = "rafael@gmail.com";
    const string SENHA_VALIDA = "A#$45";
    const string CPF_VALIDO = "047130041-11";

    Usuario *usuario;

    int estado;

    void setUp();
    void tearDown();
    void testar();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe de Entidade CARONA


class TUCarona
{
private:

    const string CODIGO_CARONA_VALIDO = "2000";
    const string CIDADE_ORIGEM_VALIDA = "Goiania";
    const string CIDADE_DESTINO_VALIDA = "Chapadinha";
    const string ESTADO_ORIGEM_VALIDO = "GO";
    const string ESTADO_DESTINO_VALIDO = "MA";
    const string DATA_VALIDA = "28/02/2099";
    const string DURACAO_VALIDA = "20";
    const string VAGAS_VALIDAS = "3";
    const string PRECO_VALIDO = "200,00";

    Carona *carona;

    int estado;

    void setUp();
    void tearDown();
    void testar();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe de RESERVA


class TUReserva
{
private:

    const string CODIGO_RESERVA_VALIDO = "20000";
    const string ASSENTO_VALIDO = "D";
    const string BAGAGEM_VALIDA = "2";

    Reserva *reserva;

    int estado;

    void setUp();
    void tearDown();
    void testar();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe de CONTA

class TUConta
{
private:

    const string CODIGO_BANCO_VALIDO = "200";
    const string AGENCIA_VALIDA = "3590-7";
    const string NUMERO_CONTA_VALIDO = "261533-4";

    Conta *conta;

    int estado;

    void setUp();
    void tearDown();
    void testar();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};

#endif // TESTES_H_INCLUDED

