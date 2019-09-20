#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

// Declaração de Classes de Testes Unitarios

// TU para classe Assento

class TUAssento
{
private:

    // Definições de constantes para evitar numeros mágicos

    const string DIANTEIRO_VALIDO = "D";
    const string TRASEIRO_VALIDO  = "T";

    // talvez n precise dos invalidos
    const string DIANTEIRO_INVALIDO = "X";
    const string TRASEIRO_INVALIDO  = " ";

    // Referência (ponteiro) para o objeto a ser testado
    Assento* assento; // note o ptr em minusculo

    // Estado do teste.
    int estado;

    // Declarações de métodos.
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================
// Teste Unitario para Classe Bagagem (exemplo)

class TUBagagem
{
private:

    // Definições de constantes para evitar numeros mágicos

    const static int VALOR_VALIDO   = 2;
    const static int VALOR_INVALIDO = 30;

    // Referência (ponteiro) para o objeto a ser testado
    Bagagem *bagagem;

    // Estado do teste.
    int estado;

    // Declarações de métodos.
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(); //
};
//==================================================================================

#endif // TESTES_H_INCLUDED
