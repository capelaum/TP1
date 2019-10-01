/**
 * @file main.cpp
 *
 * @brief Arquivo com a implementa&ccedil;&atilde;o b&aacute;sica do programa,
 *  onde executa-se os Testes Unit&aacute;rios de todas Classes de Dom&iacute;nios e Entidades.
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 */

/*
   Feito por:
   - Luis Vinicius Capelletto - 16/0134544
   - Rafael Barbosa de Souza  - 17/0043827

   Convencao de codificacao adotada: AStyle
*/


#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
    cout << "--------->TESTES DE DOMINIOS<---------\n" << endl;

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
    TUEmail teste_email;
    TUAgencia teste_agencia;
    TUNumeroConta teste_conta;
    TUPreco teste_preco;
    TUSenha teste_senha;
    TUVagas teste_vagas;
    TUNome teste_nome;
    TUTelefone teste_telefone;

    cout << "TESTE DE ASSENTO:           " ;
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

    cout << "TESTE DE BAGAGEM:           " ;
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

    cout << "TESTE DE CODIGO DE BANCO:   ";
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

    cout << "TESTE DE CODIGO DE CARONA:  ";
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

    cout << "TESTE DE CIDADE:            ";
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

    cout << "TESTE DE CPF:               ";
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

    cout << "TESTE DE DATA:              ";
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

    cout << "TESTE DE DURACAO:           ";
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

    cout << "TESTE DE ESTADO:            ";
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

    cout << "TESTE DE EMAIL:             ";
    // run teste de Email
    switch(teste_email.run())
    {
    case TUEmail::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUEmail::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE NOME:              ";
    // run teste de Nome
    switch(teste_nome.run())
    {
    case TUNome::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUNome::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE NUMERO DE AGENCIA: ";
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

    cout << "TESTE DE NUMERO DE CONTA:   ";
    // run teste de Conta
    switch(teste_conta.run())
    {
    case TUNumeroConta::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUNumeroConta::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE PRECO:             ";
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

    cout << "TESTE DE TELEFONE:          ";
    // run teste de Telefone
    switch(teste_telefone.run())
    {
    case TUTelefone::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUTelefone::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE SENHA:             ";
    // run teste de Senha
    switch(teste_senha.run())
    {
    case TUSenha::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUSenha::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE VAGAS:             ";
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

    cout << "\n--------->TESTES DE ENTIDADES<---------\n" << endl;

    TUUsuario teste_usuario;
    TUCarona teste_carona;
    TUReserva teste_reserva;
    TUConta teste_conta_entidade;

    cout << "TESTE DE USUARIO: " ;
    // run teste de Usuario
    switch(teste_usuario.run())
    {
    case TUUsuario::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUUsuario::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CARONA:  " ;
    // run teste de Carona
    switch(teste_carona.run())
    {
    case TUCarona::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUCarona::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE RESERVA: " ;
    // run teste de Reserva
    switch(teste_reserva.run())
    {
    case TUReserva::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUReserva::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    cout << "TESTE DE CONTA:   " ;
    // run teste de Conta
    switch(teste_conta_entidade.run())
    {
    case TUConta::SUCESSO:
        cout << "SUCESSO!" << endl;
        break;
    case TUConta::FALHA:
        cout << "FALHA!" << endl;
        break;
    }

    return 0;
}
