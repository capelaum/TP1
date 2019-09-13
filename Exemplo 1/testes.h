#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

// Declara��o de classes de testes unitarios

// TU para classe Assento

class TUAssento {
private:

    // Defini��es de constantes para evitar numeros m�gicos

    const string DIANTEIRO_VALIDO = "D";
    const string TRASEIRO_VALIDO  = "T";

    // talvez n precise dos invalidos
    const string DIANTEIRO_INVALIDO = "X";
    const string TRASEIRO_INVALIDO  = " ";

    // Refer�ncia (ponteiro) para o objeto a ser testado
    Assento* assento; // note que o ptr eh minusculo

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

// Teste Unitario para Classe Codigo (exemplo)
class TUCodigo {
private:

    // Defini��es de constantes para evitar numeros m�gicos

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Refer�ncia (ponteiro) para o objeto a ser testado
    Codigo *codigo;

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


#endif // TESTES_H_INCLUDED
