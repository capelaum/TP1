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
    if ( (Assento.compare(Dianteiro) != 0) && (Assento.compare(Traseiro) != 0) )
    {
            //cout << "Validar assento falhou!" << endl;
            throw invalid_argument ("Argumento invalido.");
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
    int int_bagagem = stoi(Bagagem);

    if ((int_bagagem <= 0) || (int_bagagem >= 4))
    {
        //cout << "Validar bagagem falhou!" << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Bagagem::setBagagem(string Bagagem)
{
    validar(Bagagem);
    this->Bagagem = Bagagem;
}

// Metodos da classe Estado -
//  {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG",
//  "PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

const string Estado::ESTADOS_VALIDOS[27] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG",
    "PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

void Estado::validar(string Estado){
    bool notExists = (std::find(std::begin(ESTADOS_VALIDOS), std::end(ESTADOS_VALIDOS), Estado) == std::end(ESTADOS_VALIDOS));
    if(notExists){
        //cout << "Validar estado falhou!" << endl;
        throw invalid_argument("Argumento invalido.");
    }
}

void Estado::setEstado(string Estado)
{
    Estado::validar(Estado);
    this->Estado = Estado;
}

//Metodos da classe CodigoBanco - XXX - X de 0 a 9
const int CodigoBanco::QUANTIDADE_NUMEROS = 3;
const int CodigoBanco::MENOR_VALOR_VALIDO = 0;
const int CodigoBanco::MAIOR_VALOR_VALIDO = 9;

void CodigoBanco::validar(string Codigo)
{
    if(Codigo.size() > CodigoBanco::QUANTIDADE_NUMEROS ||
        Codigo.size() == 0){
        throw invalid_argument("Argumento invalido.");
    }
    int i;
    for(i=0; i<CodigoBanco::QUANTIDADE_NUMEROS; i++){
        int x = stoi(Codigo[i]+"");
        if( x < 0 || x > 9){
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void CodigoBanco::setCodigoBanco(string CodigoBanco)
{
    CodigoBanco::validar(CodigoBanco);
    this->CodigoBanco = CodigoBanco;
}

//Metodos da classe CodigoCarona - XXXX - X de 0 a 9
const int CodigoCarona::QUANTIDADE_NUMEROS = 4;
const int CodigoCarona::MENOR_VALOR_VALIDO = 0;
const int CodigoCarona::MAIOR_VALOR_VALIDO = 9;

void CodigoCarona::validar(string Codigo)
{
    if(Codigo.size() > CodigoCarona::QUANTIDADE_NUMEROS ||
        Codigo.size() == 0){
        throw invalid_argument("Argumento invalido.");
    }
    int i;
    for(i=0; i<CodigoCarona::QUANTIDADE_NUMEROS; i++){
        int x = stoi(Codigo[i]+"");
        if( x < 0 || x > 9){
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void CodigoCarona::setCodigoCarona(string CodigoCarona)
{
    CodigoCarona::validar(CodigoCarona);
    this->CodigoCarona = CodigoCarona;
}

//Metodos da classe CodigoReserva - XXXXX - X de 0 a 9
const int CodigoReserva::QUANTIDADE_NUMEROS = 5;
const int CodigoReserva::MENOR_VALOR_VALIDO = 0;
const int CodigoReserva::MAIOR_VALOR_VALIDO = 9;

void CodigoReserva::validar(string Codigo)
{
    if(Codigo.size() > CodigoReserva::QUANTIDADE_NUMEROS ||
        Codigo.size() == 0){
        throw invalid_argument("Argumento invalido.");
    }
    int i;
    for(i=0; i<CodigoReserva::QUANTIDADE_NUMEROS; i++){
        int x = stoi(Codigo[i]+"");
        if( x < 0 || x > 9){
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void CodigoReserva::setCodigoReserva(string CodigoReserva)
{
    CodigoReserva::validar(CodigoReserva);
    this->CodigoReserva = CodigoReserva;
}
