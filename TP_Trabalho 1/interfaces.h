#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declara��es de Interfaces na Camada de Apresenta��o
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Autentica��o na camada de apresenta��o.

class IAutenticacao
{
public:

    // M�todo por meio do qual � solicitado autentica��o.
    bool Autenticar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    ~IAutenticacao(){}
};
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Usu�rio na camada de apresenta��o.

class IUsuario
{
public:

    // M�todos relacionados a contas de Usu�rio
    virtual Cadastrar() throw(runtime_error) = 0;
    virtual Editar()    throw(runtime_error) = 0;
    virtual Excluir()   throw(runtime_error) = 0;
    virtual Pesquisar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~IUsuario(){}
};
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Caronas na camada de apresenta��o.

class ICarona
{
public:

    // M�todo por meio do qual � solicitado cadastro.
    virtual cadastrar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~ICarona(){}
};
// --------------------------------------------------------------------------------------
// Declara��o de interface para funcionalidades de Reservas na camada de apresenta��o.

class IReserva
{
public:

    // M�todo por meio do qual � solicitado cadastro.
    virtual cadastrar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~IReserva(){}
};


#endif // INTERFACES_H_INCLUDED
