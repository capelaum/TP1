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
    estado = SUCESSO;
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
// Metodos testes da classe CodigoCarona

void TUCodigoCarona::setUp()
{
    codigo_carona = new CodigoCarona();
    estado = SUCESSO;
}

void TUCodigoCarona::tearDown()
{
    delete codigo_carona;
}

void TUCodigoCarona::testarCenarioSucesso()
{
    try
    {
        codigo_carona->setCodigoCarona(VALOR_VALIDO);
        // cout << "Codigo de Carona valido: " << codigo_carona->getCodigoCarona() << endl;

        if (codigo_carona->getCodigoCarona().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUCodigoCarona::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUCodigoCarona::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUCodigoCarona::testarCenarioFalha()
{
    try
    {
        codigo_carona->setCodigoCarona(VALOR_INVALIDO);
        cout << "Codigo de Carona invalido: " << codigo_carona->getCodigoCarona() << endl;
        cout << "TUCodigoCarona::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (codigo_carona->getCodigoCarona().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUCodigoCarona::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUCodigoCarona::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe CodigoReserva

void TUCodigoReserva::setUp()
{
    codigo_reserva = new CodigoReserva();
    estado = SUCESSO;
}

void TUCodigoReserva::tearDown()
{
    delete codigo_reserva;
}

void TUCodigoReserva::testarCenarioSucesso()
{
    try
    {
        codigo_reserva->setCodigoReserva(VALOR_VALIDO);
        // cout << "Codigo de Reserva valido: " << codigo_reserva->getCodigoReserva() << endl;

        if (codigo_reserva->getCodigoReserva().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUCodigoReserva::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUCodigoReserva::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUCodigoReserva::testarCenarioFalha()
{
    try
    {
        codigo_reserva->setCodigoReserva(VALOR_INVALIDO);
        cout << "Codigo de Reserva invalido: " << codigo_reserva->getCodigoReserva() << endl;
        cout << "TUCodigoReserva::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (codigo_reserva->getCodigoReserva().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUCodigoReserva::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUCodigoReserva::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Cidade
void TUCidade::setUp()
{
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown()
{
    delete cidade;
}

void TUCidade::testarCenarioSucesso()
{
    try
    {
        cidade->setCidade(VALOR_VALIDO);
        // cout << "Cidade valida: " << cidade->getCidade() << endl;

        if (cidade->getCidade().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUCidade::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUCidade::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha()
{
    try
    {
        cidade->setCidade(VALOR_INVALIDO);
        cout << "Cidade invalida: " << cidade->getCidade() << endl;
        cout << "TUCidade::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (cidade->getCidade().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUCidade::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUCidade::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe CPF

void TUCPF::setUp()
{
    cpf = new CPF();
    estado = SUCESSO;
}

void TUCPF::tearDown()
{
    delete cpf;
}

void TUCPF::testarCenarioSucesso()
{
    try
    {
        cpf->setCPF(CPF_VALIDO);
        // cout << "CPF valido: " << cpf->getCPF() << endl;

        if (cpf->getCPF().compare(CPF_VALIDO) != 0)
        {
            cout << "TUCPF::testarCenarioSucesso falhou! CPF VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUCPF::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUCPF::testarCenarioFalha()
{
    try
    {
        cpf->setCPF(CPF_INVALIDO);
        cout << "TUCPF::testarCenarioFalha falhou! CPF INVALIDO" << endl;
        estado = FALHA;
    }
    catch(invalid_argument excecao)
    {
        if (cpf->getCPF().compare(CPF_INVALIDO) == 0)
        {
            cout << "TUCPF::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUCPF::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Data

void TUData::setUp()
{
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::testarCenarioSucesso()
{
    try
    {
        data->setData(VALOR_VALIDO);
        // cout << "Data valida: " << data->getData() << endl;

        if (data->getData().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUData::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUData::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha()
{
    try
    {
        data->setData(VALOR_INVALIDO);
        cout << "TUData::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (data->getData().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUData::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUData::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Duracao

void TUDuracao::setUp()
{
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown()
{
    delete duracao;
}

void TUDuracao::testarCenarioSucesso()
{
    try
    {
        duracao->setDuracao(VALOR_VALIDO);

        if (duracao->getDuracao().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUDuracao::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUDuracao::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioFalha()
{
    try
    {
        duracao->setDuracao(VALOR_INVALIDO);

        cout << "TUDuracao::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (duracao->getDuracao().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUDuracao::testarCenarioFalha falhou! CATCH VALOR INVALIDO" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUDuracao::run()
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
        // cout << "Estado valido: " << estado->getEstado() << endl;

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
//========================================================================
// Metodos testes da classe Agencia

void TUAgencia::setUp()
{
    agencia = new Agencia();
    estado = SUCESSO;
}

void TUAgencia::tearDown()
{
    delete agencia;
}

void TUAgencia::testarCenarioSucesso()
{
    try
    {
        agencia->setAgencia(AGENCIA_VALIDA);
        // cout << "Agencia valida: " << agencia->getAgencia() << endl;

        if (agencia->getAgencia().compare(AGENCIA_VALIDA) != 0)
        {
            cout << "TUAgencia::testarCenarioSucesso falhou! AGENCIA VALIDA" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUAgencia::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUAgencia::testarCenarioFalha()
{
    try
    {
        agencia->setAgencia(AGENCIA_INVALIDA);
        cout << "TUAgencia::testarCenarioFalha falhou! AGENCIA INVALIDO" << endl;
        estado = FALHA;
    }
    catch(invalid_argument excecao)
    {
        if (agencia->getAgencia().compare(AGENCIA_INVALIDA) == 0)
        {
            cout << "TUAgencia::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUAgencia::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Conta

void TUConta::setUp()
{
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown()
{
    delete conta;
}

void TUConta::testarCenarioSucesso()
{
    try
    {
        conta->setConta(CONTA_VALIDA);
        // cout << "Conta valida: " << conta->getConta() << endl;

        if (conta->getConta().compare(CONTA_VALIDA) != 0)
        {
            cout << "TUConta::testarCenarioSucesso falhou! CONTA VALIDA" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUConta::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUConta::testarCenarioFalha()
{
    try
    {
        conta->setConta(CONTA_INVALIDA);
        cout << "TUConta::testarCenarioFalha falhou! CONTA INVALIDO" << endl;
        estado = FALHA;
    }
    catch(invalid_argument excecao)
    {
        if (conta->getConta().compare(CONTA_INVALIDA) == 0)
        {
            cout << "TUConta::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUConta::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Preco

void TUPreco::setUp()
{
    preco = new Preco();
    estado = SUCESSO;
}

void TUPreco::tearDown()
{
    delete preco;
}

void TUPreco::testarCenarioSucesso()
{
    try
    {
        preco->setPreco(VALOR_VALIDO);

        if (preco->getPreco().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUPreco::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUPreco::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUPreco::testarCenarioFalha()
{
    try
    {
        preco->setPreco(VALOR_INVALIDO);

        cout << "TUPreco::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (preco->getPreco().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUPreco::testarCenarioFalha falhou! CATCH VALOR INVALIDO" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUPreco::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Senha

void TUSenha::setUp()
{
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::testarCenarioSucesso()
{
    try
    {
        senha->setSenha(SENHA_VALIDA);

        if (senha->getSenha().compare(SENHA_VALIDA) != 0)
        {
            cout << "TUSenha::testarCenarioSucesso falhou! SENHA VALIDA" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUSenha::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha()
{
    try
    {
        senha->setSenha(SENHA_INVALIDA);
        cout << "TUSenha::testarCenarioFalha falhou! SENHA INVALIDA" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (senha->getSenha().compare(SENHA_INVALIDA) == 0)
        {
            cout << "TUSenha::testarCenarioFalha falhou! CATCH SENHA INVALIDA" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUSenha::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Vagas

void TUVagas::setUp()
{
    vagas = new Vagas();
    estado = SUCESSO;
}

void TUVagas::tearDown()
{
    delete vagas;
}

void TUVagas::testarCenarioSucesso()
{
    try
    {
        vagas->setVagas(VALOR_VALIDO);

        if (vagas->getVagas().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUVagas::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUVagas::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUVagas::testarCenarioFalha()
{
    try
    {
        vagas->setVagas(VALOR_INVALIDO);

        cout << "TUVagas::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (vagas->getVagas().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUVagas::testarCenarioFalha falhou! CATCH VALOR INVALIDO" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUVagas::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}


