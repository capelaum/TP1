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
        cout << "TUAssento::testarCenarioSucesso falhou! 3" << endl;
        estado = FALHA;
    }
}

void TUAssento::testarCenarioFalha()
{
    try
    {

        assento->setAssento(DIANTEIRO_INVALIDO);

        cout << "TUAssento::testarCenarioFalha falhou! 3" << endl;
        estado = FALHA;

        assento->setAssento(TRASEIRO_INVALIDO);

        cout << "TUAssento::testarCenarioFalha falhou! 4" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if(assento->getAssento().compare(DIANTEIRO_INVALIDO) == 0)
        {
            cout << "TUAssento::testarCenarioFalha falhou! 1" << endl;
            estado = FALHA;
        }

        if(assento->getAssento().compare(TRASEIRO_INVALIDO) == 0)
        {
            cout << "TUAssento::testarCenarioFalha falhou! 2" << endl;
            estado = FALHA;
        }

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
        // cout << "Valor de Bagagens valido: " << bagagem->getBagagem() << endl;

        if (bagagem->getBagagem().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUBagagem::testarCenarioSucesso falhou!" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUBagagem::testarCenarioSucesso falhou!" << endl;
        estado = FALHA;
    }
}

void TUBagagem::testarCenarioFalha()
{
    try
    {
        bagagem->setBagagem(VALOR_INVALIDO);
        // cout << "Valor de Bagagens invalido: " << bagagem->getBagagem() << endl;
        cout << "TUBagagem::testarCenarioFalha falhou! 1" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (bagagem->getBagagem().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUBagagem::testarCenarioFalha falhou! 2" << endl;
            estado = FALHA;
        }

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
//========================================================================
// Metodos testes da classe Estado

void TUEstado::setUp()
{
    estado = new Estado();
    estado_teste = SUCESSO; // inicial
}

void TUEstado::tearDown()
{
    delete estado;
}

void TUEstado::testarCenarioSucesso()
{
    try
    {
        estado->setEstado(ESTADO_VALIDO);
        // cout << "Valor de Bagagens valido: " << bagagem->getBagagem() << endl;

        if (estado->getEstado().compare(ESTADO_VALIDO) != 0)
        {
            cout << "TUEstado::testarCenarioSucesso falhou!" << endl;
            estado_teste = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        estado_teste = FALHA;
    }
}

void TUEstado::testarCenarioFalha()
{
    try
    {
        estado->setEstado(ESTADO_INVALIDO);

        estado_teste = FALHA;
        cout << "TUEstado::testarCenarioFalha falhou! 1" << endl;

    }
    catch(invalid_argument excecao)
    {
        if (estado->getEstado().compare(ESTADO_INVALIDO) != 0)
        {
            estado_teste = FALHA;
            cout << "TUEstado::testarCenarioFalha falhou! 2" << endl;
        }
        return;
    }
}

int TUEstado::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado_teste;
}

