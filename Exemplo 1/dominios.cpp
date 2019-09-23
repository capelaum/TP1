#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

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
            cout << "Validar assento falhou!" << endl;
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

void Bagagem ::validar(string Bagagem)
{
    // transformar string bagagem para inteiro e verificar 0 <= Bagagem <= 4
    int_bagagem = stoi (Bagagem);

    if ((0 >= int_bagagem) && (int_bagagem >= 4))
    {
        cout << "Validar bagagem falhou!" << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Bagagem::setBagagem(string Bagagem)
{
    validar(Bagagem);
    this->int_bagagem = Bagagem::int_bagagem ;
}

// Metodos da classe Estado -
//  {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG",
//  "PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

const string Estado::ESTADOS_VALIDOS[27] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG",
    "PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

void Estado::validar(string Estado){
    bool notExists = std::find(std::begin(ESTADOS_VALIDOS), std::end(ESTADOS_VALIDOS), Estado) == std::end(ESTADOS_VALIDOS);
    if(notExists){
        cout << "Validar estado falhou!" << endl;
        throw invalid_argument ("Argumento invalido.");
    }
}

void Estado::setEstado(string Estado)
{
    validar(Estado);
    this->Estado = Estado::Estado ;
}
