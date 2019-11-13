#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declarações de serviços na camada de apresentação
// -----------------------------------------------------------------

// Declaração de interface para serviço de autenticação na camada de apresentação.

class IAutenticacao
{
public:

    // Método por meio do qual é solicitado autenticação.
    virtual ResultadoAutenticacao Autenticar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~IUAutenticacao(){}
};

// Declaração de interface para serviço de usuário na camada de apresentação.

class IUsuario
{
public:

    // Método por meio do qual é solicitado cadastro.
    virtual ResultadoCadastro cadastrar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~IUsuario(){}
};

// Declaração de interface para serviço de usuário na camada de apresentação.

class ICarona
{
public:

    // Método por meio do qual é solicitado cadastro.
    virtual ResultadoCadastro cadastrar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~IUsuario(){}
};




#endif // INTERFACES_H_INCLUDED
