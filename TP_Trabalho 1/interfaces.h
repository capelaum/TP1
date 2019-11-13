#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declara��es de servi�os na camada de apresenta��o
// -----------------------------------------------------------------

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IAutenticacao
{
public:

    // M�todo por meio do qual � solicitado autentica��o.
    virtual ResultadoAutenticacao Autenticar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~IUAutenticacao(){}
};

// Declara��o de interface para servi�o de usu�rio na camada de apresenta��o.

class IUsuario
{
public:

    // M�todo por meio do qual � solicitado cadastro.
    virtual ResultadoCadastro cadastrar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~IUsuario(){}
};

// Declara��o de interface para servi�o de usu�rio na camada de apresenta��o.

class ICarona
{
public:

    // M�todo por meio do qual � solicitado cadastro.
    virtual ResultadoCadastro cadastrar() throw(runtime_error) = 0;

    // M�todo destrutor virtual.
    virtual ~IUsuario(){}
};




#endif // INTERFACES_H_INCLUDED
