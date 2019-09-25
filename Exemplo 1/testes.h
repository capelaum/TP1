#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

// Declara��o de Classes de Testes Unitarios

// Teste Unitario para classe Assento

class TUAssento
{
private:

    const string DIANTEIRO_VALIDO = "D";
    const string TRASEIRO_VALIDO  = "T";

    const string DIANTEIRO_INVALIDO = "X";
    const string TRASEIRO_INVALIDO  = "Y";

    // Refer�ncia (ponteiro) para o objeto a ser testado
    Assento* assento;

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
// Teste Unitario para Classe Bagagem

class TUBagagem
{
private:

    const string VALOR_VALIDO = "2";
    const string VALOR_INVALIDO = "30";

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

    // Defini��es de constantes para evitar numeros m�gicos
    const string VALOR_VALIDO = "200";
    const string VALOR_INVALIDO = "-40";

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
// Teste Unitario para Classe Estado

class TUEstado
{
private:

    // Defini��es de constantes para evitar valorses m�gicos
    const string ESTADO_VALIDO = "DF";
    const string ESTADO_INVALIDO = "KK";

    // Refer�ncia (ponteiro) para o objeto a ser testado
    Estado *estado;

    // Estado do teste.
    int estado_teste;

    // Declara��es de m�todos.
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================

#endif // TESTES_H_INCLUDED

