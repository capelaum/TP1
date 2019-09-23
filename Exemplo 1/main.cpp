#include <iostream>

// Documentaçao do doxygen deve ser comentada
// Definir cpf, data, usuario, nome, telefone, etc..
// explicar como foram validados e como funciona
// Como se explicasse para um leigo em prog

/** main() **/

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
    TUAssento teste_assento;
    TUBagagem teste_bagagem;
    TUEstado teste_estado;

    cout << "--------->TESTES DE DOMINIOS<---------" << endl;

    cout << "TESTE DE ASSENTO: " ;
    // run teste de Assento
    switch(teste_assento.run())
    {
    case TUAssento::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUAssento::FALHA  :
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE BAGAGEM: " ;
    // run teste de Bagagem
    switch(teste_bagagem.run())
    {
    case TUBagagem::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUBagagem::FALHA  :
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE ESTADO: " ;
    // run teste de Estado
    switch(teste_estado.run())
    {
    case TUEstado::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUEstado::FALHA  :
        cout << "FALHA!" << endl;
        break;
    }

    return 0;
}
