#include "entidades.h"

// Ao se fazer os metodos de entidades, passar os objetos por valor
// **NAO por referencia** -> vc nao quer modificar o conteudo dos objetos
// exemplo: void set(User &p1, User &p2){...}
// por conta de modificaçao no valor passado

void Usuario::setNome(Nome *nome)
{
    this->nome = nome;
}

Nome Usuario::getNome()
{
    return *this->nome;
}

void Usuario::setTelefone(Telefone *telefone)
{
    this->telefone = telefone;
}

Telefone Usuario::getTelefone()
{
    return *this->telefone;
}

void Usuario::setEmail(Email *email)
{
    this->email = email;
}

Email Usuario::getEmail()
{
    return *this->email;
}

void Usuario::setSenha(Senha *senha)
{
    this->senha = senha;
}

Senha Usuario::getSenha()
{
    return *this->senha;
}

void Usuario::setCPF(CPF *cpf)
{
    this->cpf = cpf;
}

CPF Usuario::getCPF()
{
    return *this->cpf;
}
