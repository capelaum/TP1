#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

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
    const string TRASEIRO_INVALIDO  = " ";

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

    // Defini��es de constantes para evitar numeros m�gicos
    // Necess�rio para valores numericos mais!
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

#endif // TESTES_H_INCLUDED
