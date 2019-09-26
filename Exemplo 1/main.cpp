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
    TUCodigoBanco teste_codigo_banco;
    TUCodigoCarona teste_codigo_carona;
    TUCodigoReserva teste_codigo_reserva;
    TUCidade teste_cidade;
    TUCPF teste_CPF;
    TUData teste_data;
    TUDuracao teste_duracao;
    TUEstado teste_estado;
    TUAgencia teste_agencia;
    TUConta teste_conta;
    TUPreco teste_preco;
    TUVagas teste_vagas;

    cout << "--------->TESTES DE DOMINIOS<---------" << endl;

    cout << "TESTE DE ASSENTO: " ;
    // run teste de Assento
    switch(teste_assento.run())
    {
    case TUAssento::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUAssento::FALHA:
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
    case TUBagagem::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CODIGO DE BANCO: ";
    // run teste de Codigo de Banco
    switch(teste_codigo_banco.run())
    {
    case TUCodigoBanco::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCodigoBanco::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CODIGO DE CARONA: ";
    // run teste de Codigo de Carona
    switch(teste_codigo_carona.run())
    {
    case TUCodigoCarona::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCodigoCarona::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CODIGO DE RESERVA: ";
    // run teste de Codigo de Reserva
    switch(teste_codigo_reserva.run())
    {
    case TUCodigoReserva::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCodigoReserva::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CIDADE: ";
    // run teste de Cidade
    switch(teste_cidade.run())
    {
    case TUCidade::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCidade::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CPF: ";
    // run teste de CPF
    switch(teste_CPF.run())
    {
    case TUCPF::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCPF::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE DATA: ";
    // run teste de Data
    switch(teste_data.run())
    {
    case TUData::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUData::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE DURACAO: " ;
    // run teste de Duracao
    switch(teste_duracao.run())
    {
    case TUDuracao::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUDuracao::FALHA:
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
    case TUEstado::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE NUMERO DE AGENCIA: " ;
    // run teste de Agencia
    switch(teste_agencia.run())
    {
    case TUAgencia::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUAgencia::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE NUMERO DE CONTA: " ;
    // run teste de Conta
    switch(teste_conta.run())
    {
    case TUConta::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUConta::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE PRECO: " ;
    // run teste de Preco
    switch(teste_preco.run())
    {
    case TUPreco::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUPreco::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE VAGAS: " ;
    // run teste de Vagas
    switch(teste_vagas.run())
    {
    case TUVagas::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUVagas::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    return 0;
}
