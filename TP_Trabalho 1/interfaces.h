#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declarações de Interfaces na Camada de Apresentação
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Autenticação na camada de apresentação.

class IAutenticacao
{
public:

    // Método por meio do qual é solicitado autenticação.
    bool Autenticar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    ~IAutenticacao(){}
};
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Usuário na camada de apresentação.

class IUsuario
{
public:

    // Métodos relacionados a contas de Usuário
    virtual Cadastrar() throw(runtime_error) = 0;
    virtual Editar()    throw(runtime_error) = 0;
    virtual Excluir()   throw(runtime_error) = 0;
    virtual Pesquisar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~IUsuario(){}
};
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Caronas na camada de apresentação.

class ICarona
{
public:

    // Método por meio do qual é solicitado cadastro.
    virtual cadastrar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~ICarona(){}
};
// --------------------------------------------------------------------------------------
// Declaração de interface para funcionalidades de Reservas na camada de apresentação.

class IReserva
{
public:

    // Método por meio do qual é solicitado cadastro.
    virtual cadastrar() throw(runtime_error) = 0;

    // Método destrutor virtual.
    virtual ~IReserva(){}
};


#endif // INTERFACES_H_INCLUDED
