#include "dominios.h"

// Definicoes de metodos das classes de Dominio

//Definicoes de constantes.


// Metodos da classe Assento - D ou T

const string Assento::Dianteiro = "D";
const string Assento::Traseiro = "T";

void Assento::validar(string Assento)
{
    // Se a string assento passada for diferente de D e T
    if ( Assento.compare(Dianteiro) == false )
    {
        if (Assento.compare(Traseiro) == false )
        {
            cout << "validar assento falhou!" << endl;
            throw invalid_argument ("Argumento invalido.");
        }
    }
}

void Assento::setAssento(string Assento)
{
    validar(Assento);
    this->Assento = Assento;
}


// Metodos da classe Bagagem - 0,1,2,3,4

void Bagagem ::validar(string Bagagem )
{
    // transformar string bagagem para inteiro e verificar 0 <= Bagagem <= 4
}

void Bagagem ::setBagagem(string Bagagem)
{
    validar(Bagagem );
    this->Bagagem  = Bagagem ;
}

// Metodos da classe Codigo
void Codigo::validar(int codigo)
{

    // Lança exceção se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setCodigo(int codigo)
{
    validar(codigo);
    this->codigo = codigo;
}
