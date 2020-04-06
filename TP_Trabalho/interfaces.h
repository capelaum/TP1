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

class ILNAutenticacao; // classe de logica de negocio

// Declara��es de Interfaces da Camada de Apresenta��o
// --------------------------------------------------------------------------------------
// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.
class IUAutenticacao
{
public:

    // M�todo por meio do qual � solicitado servi�o.
    virtual ResultadoAutenticacao autenticar()
    throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.
    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;

    // M�todo destrutor virtual.
    virtual ~IUAutenticacao(){}
};

class ILNAutenticacao {
public:

    // M�todo por meio do qual � solicitado servi�o.

    virtual ResultadoAutenticacao autenticar(const Matricula&,
                                             const Senha&) throw(runtime_error)= 0;
   // M�todo destrutor virtual.

    virtual ~ILNAutenticacao(){}
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
