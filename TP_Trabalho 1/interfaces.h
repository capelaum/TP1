/**
 * @file interfaces.h
 *
 * @brief Arquivo com a declara&ccedil;&atilde;o das Classes de Interface da Camada de Apresenta&ccedil;&atilde;o do programa
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 */

#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declara��es de Interfaces da Camada de Apresenta��o
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Autentica��o na camada de apresenta��o.

class IAutenticacao
{
public:

    // M�todo por meio do qual � solicitado autentica��o.
    virtual bool Autenticar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~IAutenticacao(){}
};
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Usu�rio na camada de apresenta��o.

class IUsuario
{
public:

    // M�todos relacionados a opera��es de contas de Usu�rio
    virtual void Executar (Email, bool*)  throw(runtime_error) = 0;
    virtual void Cadastrar()              throw(runtime_error) = 0;

    virtual void Editar(Usuario)          throw(runtime_error) = 0;
    virtual int  Excluir(Usuario)         throw(runtime_error) = 0;
    virtual void Pesquisar(Usuario)       throw(runtime_error) = 0;


    virtual ~IUsuario(){}
};
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Caronas na camada de apresenta��o.

class ICarona
{
public:

    // M�todos relacionados a opera��es de Caronas
    virtual void Executar(Email)       throw(runtime_error) = 0;
    virtual void Pesquisar(Carona)     throw(runtime_error) = 0;

    virtual bool Cadastrar(Carona)     throw(runtime_error) = 0;
    virtual void Editar(Carona)        throw(runtime_error) = 0;
    virtual int  Excluir(Carona)       throw(runtime_error) = 0;

    virtual ~ICarona(){}
};
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Reservas na camada de apresenta��o.

class IReserva
{
public:

    // M�todos relacionados a opera��es de Reservas
    virtual void Executar(Email)        throw(runtime_error) = 0;
    virtual void Pesquisar(Reserva)     throw(runtime_error) = 0;

    virtual bool Cadastrar(Reserva)     throw(runtime_error) = 0;
    virtual void Editar(Reserva)        throw(runtime_error) = 0;
    virtual int  Excluir(Reserva)       throw(runtime_error) = 0;

    virtual ~IReserva(){}
};


#endif // INTERFACES_H_INCLUDED
