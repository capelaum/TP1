#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

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

#endif // TESTES_H_INCLUDED

