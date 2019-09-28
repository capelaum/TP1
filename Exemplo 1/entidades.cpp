#include "entidades.h"

// Ao se fazer os metodos de entidades, passar os objetos por valor
// **NAO por referencia** -> vc nao quer modificar o conteudo dos objetos
// exemplo: void set(User &p1, User &p2){...}
// por conta de modificaçao no valor passado

void Usuario::setNome(Nome *nome)
{
    nome.setNome(nome);

    // Telefone.setTelefone(telefone);
    // Email.setEmail(email);
    // Senha.setSenha(senha);
    // CPF.setCPF(cpf);
}

void getNome()
{
    nome->setNome(this->nome.getNome());

    //telefone->setTelefone(this->Telefone.getTelefone());
    //email->setEmail(this->Email.getEmail());
    //senha->setSenha(this->Senha.getSenha());
    //cpf->setCPF(this->CPF.getCPF());
}
