/**
 * @file interfaces.h
 *
 * @brief Arquivo com a declara&ccedil;&atilde;o das Classes da Camada de Apresenta&ccedil;&atilde;o do programa
 *
 *  @author Lu&iacute;s Capelletto
 *  @author Rafael Barbosa
 */

#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declarações de Interfaces da Camada de Apresentação
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Autenticação na camada de apresentação.

class IAutenticacao
{
public:

    // Método por meio do qual é solicitado autenticação.
    virtual bool Autenticar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~IAutenticacao(){}
};
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Usuário na camada de apresentação.

class IUsuario
{
public:

    // Métodos relacionados a operações de contas de Usuário
    virtual void Executar (Email, bool*)  throw(runtime_error) = 0;
    virtual void Cadastrar()              throw(runtime_error) = 0;

    virtual void Editar(Usuario)          throw(runtime_error) = 0;
    virtual int  Excluir(Usuario)         throw(runtime_error) = 0;
    virtual void Pesquisar(Usuario)       throw(runtime_error) = 0;


    virtual ~IUsuario(){}
};
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Caronas na camada de apresentação.

class ICarona
{
public:

    // Métodos relacionados a operações de Caronas
    virtual void Executar(Email)       throw(runtime_error) = 0;
    virtual void Pesquisar(Carona)     throw(runtime_error) = 0;

    virtual bool Cadastrar(Carona)     throw(runtime_error) = 0;
    virtual void Editar(Carona)        throw(runtime_error) = 0;
    virtual int  Excluir(Carona)       throw(runtime_error) = 0;

    virtual ~ICarona(){}
};
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Reservas na camada de apresentação.

class IReserva
{
public:

    // Métodos relacionados a operações de Reservas
    virtual void Executar(Email)        throw(runtime_error) = 0;
    virtual void Pesquisar(Reserva)     throw(runtime_error) = 0;

    virtual bool Cadastrar(Reserva)     throw(runtime_error) = 0;
    virtual void Editar(Reserva)        throw(runtime_error) = 0;
    virtual int  Excluir(Reserva)       throw(runtime_error) = 0;

    virtual ~IReserva(){}
};


#endif // INTERFACES_H_INCLUDED
