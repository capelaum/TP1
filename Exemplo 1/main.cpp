#include <iostream>

// Documentaçao do doxygen deve ser comentada
// Definir cpf, data, usuario, nome, telefone, etc..
// explicar como foram validados e como funciona
// Como se explicasse para um leigo em prog


#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

    TUCodigo teste;  // exemplo
    TUAssento teste_assento;

    cout << "--------->TESTES DE DOMINIOS<---------" << endl;
    cout << "TESTE DE ASSENTO: \n\n" ;

    switch(teste_assento.run())
    {

    case TUCodigo::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCodigo::FALHA  :
        cout << "FALHA!" << endl;
        break;
    }


    // run teste de codigo exemplo
    switch(teste.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCodigo::FALHA  :
        cout << "FALHA!" << endl;
        break;
    }

    return 0;
}
