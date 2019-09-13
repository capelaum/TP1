#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

// Declaracao de classes de dominios

class Assento{
private:

    string Assento;

    // static pois eh declarado como privado mas funciona como global
    const static string Dianteiro, Traseiro; // porque static..

    void validar(string); //throw (invalid_argument) -> desnecessario na declaracao

public:

    void setAssento (string);

    string getAssento() const {
        return Assento;
    }

};

class Bagagem {
private:

    string Bagagem;

    // string guarda qtd de bagagens
    const static string quantidade;

    void validar(string); // throw (invalid_argument);

public:

    void setBagagem (string); // throw (invalid_argument);

    string getBagagem() const {
        return Bagagem;
    }

};


class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // M�todo respons�vel por valida��o.
        void validar(int);  // throw (invalid_argument);

public:
        // M�todos de acesso.
        void setCodigo(int);

        int getCodigo() const {
            return codigo;
        }
};

#endif // DOMINIOS_H_INCLUDED
