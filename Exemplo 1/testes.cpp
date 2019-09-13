#include "testes.h"

#include <iostream>


// Definicoes de metodos de teste

// Separar cenarios de FALHA/SUCESSO
// Especificar o que falhou
// Testes unitarios para cada classe

// Metodos testes da classe Assento

void TUAssento::setUp(){
    assento = new Assento();
    estado = SUCESSO; // inicial
}

void TUAssento::tearDown(){
    delete assento;
}

void TUAssento::testarCenarioSucesso(){
    try{
        assento->setAssento(DIANTEIRO_VALIDO);
        assento->setAssento(TRASEIRO_VALIDO);

        if(assento->getAssento().compare(DIANTEIRO_VALIDO) == false){
            cout << "teste! 1" << endl;
            estado = FALHA;
        }

        if(assento->getAssento().compare(TRASEIRO_VALIDO) == false){
            cout << "teste! 2" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUAssento::testarCenarioFalha(){
    try{

        assento->setAssento(DIANTEIRO_INVALIDO);
        assento->setAssento(TRASEIRO_INVALIDO);

        if(assento->getAssento().compare(DIANTEIRO_INVALIDO)){
            cout << "teste! 3" << endl;
            estado = FALHA;
        }
        if(assento->getAssento().compare(TRASEIRO_INVALIDO)){
            cout << "teste! 4" << endl;
            estado = FALHA;
        }

        // estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUAssento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

// Metodos testes da classe Codigo (exemplo)

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;  // inicial
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);

        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;


        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}

