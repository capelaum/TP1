#include "testes.h"

#include <iostream>

// Definicoes de Metodos de Testes Unitarios

/*
    Separar cenarios de FALHA/SUCESSO
    Especificar o que falhou
    Testes unitarios para cada classe
*/
//========================================================================
// Metodos testes da classe Assento

void TUAssento::setUp()
{
    assento = new Assento();
    estado = SUCESSO; // inicial
}

void TUAssento::tearDown()
{
    delete assento;
}

void TUAssento::testarCenarioSucesso()
{
    try
    {
        assento->setAssento(DIANTEIRO_VALIDO);

        if(assento->getAssento().compare(DIANTEIRO_VALIDO) != 0)
        {
            cout << "TUAssento::testarCenarioSucesso falhou! 1" << endl;
            cout << "Assento: " << assento->getAssento() << endl;
            cout << "DIANTEIRO_VALIDO: " << DIANTEIRO_VALIDO << endl;
            estado = FALHA;
        }

        assento->setAssento(TRASEIRO_VALIDO);

        if(assento->getAssento().compare(TRASEIRO_VALIDO) != 0)
        {
            cout << "TUAssento::testarCenarioSucesso falhou! 2" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }
}

void TUAssento::testarCenarioFalha()
{
    try
    {

        assento->setAssento(DIANTEIRO_INVALIDO);

        if(assento->getAssento().compare(DIANTEIRO_INVALIDO))
        {
            cout << "TUAssento::testarCenarioFalha falhou! 1" << endl;
            estado = FALHA;
        }

        assento->setAssento(TRASEIRO_INVALIDO);

        if(assento->getAssento().compare(TRASEIRO_INVALIDO))
        {
            cout << "TUAssento::testarCenarioFalha falhou! 2" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        return;
    }
}

int TUAssento::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Bagagem

void TUBagagem::setUp()
{
    bagagem = new Bagagem();
    estado = SUCESSO; // inicial
}

void TUBagagem::tearDown()
{
    delete bagagem;
}

void TUBagagem::testarCenarioSucesso()
{
    try
    {
        bagagem->setBagagem(VALOR_VALIDO);
        cout << "Valor de Bagagens valido: " << bagagem->getBagagem() << endl;

        if (bagagem->getBagagem() != VALOR_VALIDO)
        {
            cout << "TUBagagem::testarCenarioSucesso falhou! 1" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA; // aqui que troca o estado para falha de bagagem!
    }
}

void TUBagagem::testarCenarioFalha()
{
    try
    {
        bagagem->setBagagem(VALOR_INVALIDO);
        cout << "Valor de Bagagens invalido: " << bagagem->getBagagem() << endl;
        if (bagagem->getBagagem() != VALOR_INVALIDO)
        {
            estado = SUCESSO;
            cout << "TUBagagem::testarCenarioFalha falhou! 1" << endl;
        }

    }
    catch(invalid_argument excecao)
    {
        return;
    }
}

int TUBagagem::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}


