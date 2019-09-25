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
            cout << "TUAssento::testarCenarioSucesso falhou! DIANTEIRO VALIDO" << endl;
            estado = FALHA;
        }

        assento->setAssento(TRASEIRO_VALIDO);

        if(assento->getAssento().compare(TRASEIRO_VALIDO) != 0)
        {
            cout << "TUAssento::testarCenarioSucesso falhou! TRASEIRO VALIDO" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        cout << "TUAssento::testarCenarioSucesso falhou! CATCH" << endl;
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
            cout << "TUAssento::testarCenarioFalha falhou! DIANTEIRO INVALIDO" << endl;
            estado = FALHA;
        }

        assento->setAssento(TRASEIRO_INVALIDO);

        if(assento->getAssento().compare(TRASEIRO_INVALIDO))
        {
            cout << "TUAssento::testarCenarioFalha falhou! TRASEIRO INVALIDO" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        if(assento->getAssento().compare(DIANTEIRO_INVALIDO) == 0)
        {
            cout << "TUAssento::testarCenarioFalha falhou! CATCH DIANTEIRO INVALIDO" << endl;
            estado = FALHA;
        }

        if(assento->getAssento().compare(TRASEIRO_INVALIDO) == 0)
        {
            cout << "TUAssento::testarCenarioFalha falhou! CATCH TRASEIRO INVALIDO" << endl;
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

        if (bagagem->getBagagem().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUBagagem::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUBagagem::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUBagagem::testarCenarioFalha()
{
    try
    {
        bagagem->setBagagem(VALOR_INVALIDO);

        cout << "TUBagagem::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (bagagem->getBagagem().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUBagagem::testarCenarioFalha falhou! CATCH VALOR INVALIDO" << endl;
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
// Metodos testes da classe CodigoBanco

void TUCodigoBanco::setUp()
{
    codigo_banco = new CodigoBanco();
    estado = SUCESSO;
}
void TUCodigoBanco::tearDown()
{
    delete codigo_banco;
}

void TUCodigoBanco::testarCenarioSucesso()
{
    try
    {
        codigo_banco->setCodigoBanco(VALOR_VALIDO);
        // cout << "Codigo de Banco valido: " << codigo_banco->getCodigoBanco() << endl;

        if (codigo_banco->getCodigoBanco().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUCodigoBanco::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUCodigoBanco::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUCodigoBanco::testarCenarioFalha()
{
    try
    {
        codigo_banco->setCodigoBanco(VALOR_INVALIDO);
        cout << "Codigo de Banco invalido: " << codigo_banco->getCodigoBanco() << endl;
        cout << "TUCodigoBanco::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (codigo_banco->getCodigoBanco().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUCodigoBanco::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUCodigoBanco::run()
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
    estado_teste = SUCESSO;
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
            cout << "TUEstado::testarCenarioSucesso falhou! ESTADO VALIDO" << endl;
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
        cout << "TUEstado::testarCenarioFalha falhou! ESTADO INVALIDO" << endl;

    }
    catch(invalid_argument excecao)
    {
        if (estado->getEstado().compare(ESTADO_INVALIDO) == 0)
        {
            estado_teste = FALHA;
            cout << "TUEstado::testarCenarioFalha falhou! CATCH" << endl;
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


