/**
 * @file entidades.cpp
 *
 * @brief Arquivo com a implementa&ccedil;&atilde;o dos m&eacute;todos das Classes de Entidades do programa
 *
 * @section a Descri&ccedil;&atilde;o
 * Cont&eacute;m os m&eacute;todos de defini&ccedil;&atilde;o e obten&ccedil;&atilde;o das Classes de Entidades.
 * Segundo os m&eacute;todos de valida&ccedil;&atilde;o e defini&ccedil;&atilde;o das Classes de Dom&iacute;nios
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 *
 */

#include "entidades.h"

// Metodos da classe Usuario

void Usuario::setNome(Nome *nome)
{
    this->nome = nome;
}

Nome* Usuario::getNome()
{
    return this->nome;
}

void Usuario::setTelefone(Telefone *telefone)
{
    this->telefone = telefone;
}

Telefone* Usuario::getTelefone()
{
    return this->telefone;
}

void Usuario::setEmail(Email *email)
{
    this->email = email;
}

Email* Usuario::getEmail()
{
    return this->email;
}

void Usuario::setSenha(Senha *senha)
{
    this->senha = senha;
}

Senha* Usuario::getSenha()
{
    return this->senha;
}

void Usuario::setCPF(CPF *cpf)
{
    this->cpf = cpf;
}

CPF* Usuario::getCPF()
{
    return this->cpf;
}

//=======================================================
// Metodos da classe Carona

void Carona::setCodigo(CodigoCarona *codigo)
{
    this->codigo = codigo;
}
CodigoCarona* Carona::getCodigo()
{
    return this->codigo;
}

void Carona::setCidadeOrigem(Cidade *cidadeOrigem)
{
    this->cidadeOrigem = cidadeOrigem;
}
Cidade* Carona::getCidadeOrigem()
{
    return this->cidadeOrigem;
}

void Carona::setEstadoOrigem(Estado *estadoOrigem)
{
    this->estadoOrigem = estadoOrigem;
}
Estado* Carona::getEstadoOrigem()
{
    return this->estadoOrigem;
}

void Carona::setCidadeDestino(Cidade *cidadeDestino)
{
    this->cidadeDestino = cidadeDestino;
}
Cidade* Carona::getCidadeDestino()
{
    return this->cidadeDestino;
}

void Carona::setEstadoDestino(Estado *estadoDestino)
{
    this->estadoDestino = estadoDestino;
}
Estado* Carona::getEstadoDestino()
{
    return this->estadoDestino;
}

void Carona::setData(Data *data)
{
    this->data = data;
}
Data* Carona::getData()
{
    return this->data;
}

void Carona::setDuracao(Duracao *duracao)
{
    this->duracao = duracao;
}
Duracao* Carona::getDuracao()
{
    return this->duracao;
}

void Carona::setVagas(Vagas *vagas)
{
    this->vagas = vagas;
}
Vagas* Carona::getVagas()
{
    return this->vagas;
}

void Carona::setPreco(Preco *preco)
{
    this->preco = preco;
}
Preco* Carona::getPreco()
{
    return this->preco;
}

//==============================================================
// Metodos da classe Reserva

void Reserva::setCodigo(CodigoReserva *codigo)
{
    this->codigo = codigo;
}
CodigoReserva* Reserva::getCodigo()
{
    return this->codigo;
}

void Reserva::setAssento(Assento *assento)
{
    this->assento = assento;
}
Assento* Reserva::getAssento()
{
    return this->assento;
}

void Reserva::setBagagem(Bagagem *bagagem)
{
    this->bagagem = bagagem;
}
Bagagem* Reserva::getBagagem()
{
    return this->bagagem;
}

//============================================================
// Metodos da classe Conta

void Conta::setBanco(CodigoBanco *banco)
{
    this->banco = banco;
}
CodigoBanco* Conta::getBanco()
{
    return this->banco;
}

void Conta::setAgencia(Agencia *agencia)
{
    this->agencia = agencia;
}
Agencia* Conta::getAgencia()
{
    return this->agencia;
}

void Conta::setNumero(NumeroConta *numero)
{
    this->numero = numero;
}
NumeroConta* Conta::getNumero()
{
    return this->numero;
}
