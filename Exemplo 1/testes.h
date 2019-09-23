#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

// Declara��o de Classes de Testes Unitarios

// TU para classe Assento

class TUAssento
{
private:

    // Defini��es de constantes para evitar numeros m�gicos

    const string DIANTEIRO_VALIDO = "D";
    const string TRASEIRO_VALIDO  = "T";

    // talvez n precise dos invalidos
    const string DIANTEIRO_INVALIDO = "X";
    const string TRASEIRO_INVALIDO  = "Y";

    // Refer�ncia (ponteiro) para o objeto a ser testado
    Assento* assento; // note o ptr em minusculo

    // Estado do teste.
    int estado;

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
// Teste Unitario para Classe Bagagem (exemplo)

class TUBagagem
{
private:

    const string str_bagagem_valida = "2";
    const string str_bagagem_invalida = "30";

    // Defini��es de constantes para evitar numeros m�gicos
    // Necess�rio para valores numericos
    const static int VALOR_VALIDO   = 2;
    const static int VALOR_INVALIDO = 30;

    // Refer�ncia (ponteiro) para o objeto a ser testado
    Bagagem *bagagem;

    // Estado do teste.
    int estado;

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
