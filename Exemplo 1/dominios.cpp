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

void Bagagem ::validar(string Bagagem, int int_bagagem )
{

    // string::size_type sz;

    // transformar string bagagem para inteiro e verificar 0 <= Bagagem <= 4
    int_bagagem = stoi (Bagagem, nullptr, 10);

    if ((0 <= int_bagagem) && (int_bagagem <= 4))
    {
        cout << "Valor valido!" << endl;
        cout << "Valor de Bagagens: " << int_bagagem << endl;
    }
    else
    {
        cout << "validar bagagem falhou!" << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Bagagem ::setBagagem(int int_bagagem)
{
    validar(Bagagem, int_bagagem);
    this->int_bagagem  = Bagagem::int_bagagem ;
}

