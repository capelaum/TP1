/**
 * @file testes.cpp
 *
 * @brief Arquivo com a implementa&ccedil;&atilde;o dos Testes Unit&aacute;rios do programa
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 *
 */

#include "testes.h"

#include <iostream>

// Definicoes de Metodos de Testes Unitarios

// TESTES UNITARIOS DE DOMINIOS
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
// Metodos testes da classe Email

void TUEmail::setUp()
{
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::testarCenarioSucesso()
{
    try
    {
        email->setEmail(EMAIL_VALIDO);
        // cout << "Email valido: " << email->getEmail() << endl;

        if (email->getEmail().compare(EMAIL_VALIDO) != 0)
        {
            cout << "TUEmail::testarCenarioSucesso falhou! AGENCIA VALIDA" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUEmail::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha()
{
    try
    {
        email->setEmail(EMAIL_INVALIDO);
        cout << "TUEmail::testarCenarioFalha falhou! EMAIL INVALIDO" << endl;
        estado = FALHA;
    }
    catch(invalid_argument excecao)
    {
        if (email->getEmail().compare(EMAIL_INVALIDO) == 0)
        {
            cout << "TUEmail::testarCenarioFalha falhou! CATCH" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUEmail::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
}
//========================================================================
// Metodos testes da classe Nome

void TUNome::setUp()
{
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}

void TUNome::testarCenarioSucesso()
{
    try
    {
        nome->setNome(VALOR_VALIDO);

        if (nome->getNome().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUNome::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUNome::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha()
{
    try
    {
        nome->setNome(VALOR_INVALIDO);

        cout << "TUNome::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (nome->getNome().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUNome::testarCenarioFalha falhou! CATCH VALOR INVALIDO" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUNome::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();

    return estado;
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

void TUNumeroConta::setUp()
{
    conta = new NumeroConta();
    estado = SUCESSO;
}

void TUNumeroConta::tearDown()
{
    delete conta;
}

void TUNumeroConta::testarCenarioSucesso()
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

void TUNumeroConta::testarCenarioFalha()
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

int TUNumeroConta::run()
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
// Metodos testes da classe Telefone

void TUTelefone::setUp()
{
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown()
{
    delete telefone;
}

void TUTelefone::testarCenarioSucesso()
{
    try
    {
        telefone->setTelefone(VALOR_VALIDO);

        if (telefone->getTelefone().compare(VALOR_VALIDO) != 0)
        {
            cout << "TUTelefone::testarCenarioSucesso falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao)
    {
        cout << "TUTelefone::testarCenarioSucesso falhou! CATCH" << endl;
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha()
{
    try
    {
        telefone->setTelefone(VALOR_INVALIDO);

        cout << "TUTelefone::testarCenarioFalha falhou! VALOR INVALIDO" << endl;
        estado = FALHA;

    }
    catch(invalid_argument excecao)
    {
        if (telefone->getTelefone().compare(VALOR_INVALIDO) == 0)
        {
            cout << "TUTelefone::testarCenarioFalha falhou! CATCH VALOR INVALIDO" << endl;
            estado = FALHA;
        }

        return;
    }
}

int TUTelefone::run()
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

// TESTES UNITARIOS DE ENTIDADES
//========================================================================
// Metodos testes da classe Usuario

// Testes de entidades
// Faz um set e get e verifica se correspondem
// verifica valor do objeto de codigo: if( obj.getcodigo().getvalor() )


//========================================================================
// Metodos testes da classe USUARIO

void TUUsuario::setUp()
{
    usuario = new Usuario();

    estado = SUCESSO;
}

void TUUsuario::tearDown()
{

    delete usuario;
}

void TUUsuario::testar()
{
    try
    {

        usuario->getNome()->setNome(NOME_VALIDO);
        if (usuario->getNome()->getNome().compare(NOME_VALIDO) != 0)
        {
            cout << "TUUsuario::testar NOME_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        usuario->getTelefone()->setTelefone(TELEFONE_VALIDO);
        if (usuario->getTelefone()->getTelefone().compare(TELEFONE_VALIDO) != 0)
        {
            cout << "TUUsuario::testar TELEFONE_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        usuario->getEmail()->setEmail(EMAIL_VALIDO);
        if (usuario->getEmail()->getEmail().compare(EMAIL_VALIDO) != 0)
        {
            cout << "TUUsuario::testar EMAIL_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        usuario->getSenha()->setSenha(SENHA_VALIDA);
        if (usuario->getSenha()->getSenha().compare(SENHA_VALIDA) != 0)
        {
            cout << "TUUsuario::testar SENHA_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        usuario->getCPF()->setCPF(CPF_VALIDO);
        if (usuario->getCPF()->getCPF().compare(CPF_VALIDO) != 0)
        {
            cout << "TUUsuario::testar CPF_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }


    }
    catch(invalid_argument excecao)
    {
        cout << "TUUsuario::testar falhou! CATCH" << endl;
        estado = FALHA;
    }
}

int TUUsuario::run()
{
    setUp();
    testar();
    tearDown();

    return estado;
}

//========================================================================
// Metodos testes da classe CARONA

void TUCarona::setUp()
{
    carona = new Carona();

    estado = SUCESSO;
}

void TUCarona::tearDown()
{

    delete carona;
}

void TUCarona::testar()
{
    try
    {

        carona->getCodigo()->setCodigoCarona(CODIGO_CARONA_VALIDO);
        if (carona->getCodigo()->getCodigoCarona().compare(CODIGO_CARONA_VALIDO) != 0)
        {
            cout << "TUCarona::testar CODIGO_CARONA_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getCidadeOrigem()->setCidade(CIDADE_ORIGEM_VALIDA);
        if (carona->getCidadeOrigem()->getCidade().compare(CIDADE_ORIGEM_VALIDA) != 0)
        {
            cout << "TUCarona::testar CIDADE_ORIGEM_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getCidadeDestino()->setCidade(CIDADE_DESTINO_VALIDA);
        if (carona->getCidadeDestino()->getCidade().compare(CIDADE_DESTINO_VALIDA) != 0)
        {
            cout << "TUCarona::testar CIDADE_DESTINO_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getEstadoOrigem()->setEstado(ESTADO_ORIGEM_VALIDO);
        if (carona->getEstadoOrigem()->getEstado().compare(ESTADO_ORIGEM_VALIDO) != 0)
        {
            cout << "TUCarona::testar ESTADO_ORIGEM_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getEstadoDestino()->setEstado(ESTADO_DESTINO_VALIDO);
        if (carona->getEstadoDestino()->getEstado().compare(ESTADO_DESTINO_VALIDO) != 0)
        {
            cout << "TUCarona::testar ESTADO_DESTINO_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getData()->setData(DATA_VALIDA);
        if (carona->getData()->getData().compare(DATA_VALIDA) != 0)
        {
            cout << "TUCarona::testar DATA_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getDuracao()->setDuracao(DURACAO_VALIDA);
        if (carona->getDuracao()->getDuracao().compare(DURACAO_VALIDA) != 0)
        {
            cout << "TUCarona::testar DURACAO_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getVagas()->setVagas(VAGAS_VALIDAS);
        if (carona->getVagas()->getVagas().compare(VAGAS_VALIDAS) != 0)
        {
            cout << "TUCarona::testar VAGAS_VALIDAS falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        carona->getPreco()->setPreco(PRECO_VALIDO);
        if (carona->getPreco()->getPreco().compare(PRECO_VALIDO) != 0)
        {
            cout << "TUCarona::testar PRECO_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        cout << "TUCarona::testar falhou! CATCH" << endl;
        estado = FALHA;
    }
}

int TUCarona::run()
{
    setUp();
    testar();
    tearDown();

    return estado;
}

//========================================================================
// Metodos testes da classe RESERVA

void TUReserva::setUp()
{
    reserva = new Reserva();

    estado = SUCESSO;
}

void TUReserva::tearDown()
{

    delete reserva;
}

void TUReserva::testar()
{
    try
    {

        reserva->getCodigo()->setCodigoReserva(CODIGO_RESERVA_VALIDO);
        if (reserva->getCodigo()->getCodigoReserva().compare(CODIGO_RESERVA_VALIDO) != 0)
        {
            cout << "TUReserva::testar CODIGO_RESERVA_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        reserva->getAssento()->setAssento(ASSENTO_VALIDO);
        if (reserva->getAssento()->getAssento().compare(ASSENTO_VALIDO) != 0)
        {
            cout << "TUReserva::testar ASSENTO_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        reserva->getBagagem()->setBagagem(BAGAGEM_VALIDA);
        if (reserva->getBagagem()->getBagagem().compare(BAGAGEM_VALIDA) != 0)
        {
            cout << "TUReserva::testar BAGAGEM_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        cout << "TUReserva::testar falhou! CATCH" << endl;
        estado = FALHA;
    }
}

int TUReserva::run()
{
    setUp();
    testar();
    tearDown();

    return estado;
}

//========================================================================
// Metodos testes da classe CONTA

void TUConta::setUp()
{
    conta = new Conta();

    estado = SUCESSO;
}

void TUConta::tearDown()
{

    delete conta;
}

void TUConta::testar()
{
    try
    {

        conta->getBanco()->setCodigoBanco(CODIGO_BANCO_VALIDO);
        if (conta->getBanco()->getCodigoBanco().compare(CODIGO_BANCO_VALIDO) != 0)
        {
            cout << "TUConta::testar CODIGO_BANCO_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        conta->getAgencia()->setAgencia(AGENCIA_VALIDA);
        if (conta->getAgencia()->getAgencia().compare(AGENCIA_VALIDA) != 0)
        {
            cout << "TUConta::testar AGENCIA_VALIDA falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

        conta->getNumero()->setConta(NUMERO_CONTA_VALIDO);
        if (conta->getNumero()->getConta().compare(NUMERO_CONTA_VALIDO) != 0)
        {
            cout << "TUConta::testar NUMERO_CONTA_VALIDO falhou! VALOR VALIDO" << endl;
            estado = FALHA;
        }

    }
    catch(invalid_argument excecao)
    {
        cout << "TUConta::testar falhou! CATCH" << endl;
        estado = FALHA;
    }
}

int TUConta::run()
{
    setUp();
    testar();
    tearDown();

    return estado;
}
