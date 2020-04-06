#include "stubs.h"

//Definições de constantes.

/*
const static string StubLNAutenticacao::TRIGGER_FALHA;
const static string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA;
*/

// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub do controlador da lógica de negócio de autenticação.

ResultadoAutenticacao StubLNAutenticacao::autenticar(const Matricula &matricula,
                                                     const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Matricula = " << matricula.getValor() << endl ;
    cout << "Senha     = " << senha.getSenha()     << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matrícula.

    // mudar switch
    if( matricula.getValor().compare(TRIGGER_FALHA) == 0){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }else if(matricula.getValor() .compare(TRIGGER_ERRO_SISTEMA) == 0){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMatricula(matricula);
    }

    return resultado;
}
