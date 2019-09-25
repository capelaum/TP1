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

// Metodos da classe Bagagem - 0 a 4

const int Bagagem::BAGAGEM_MIN = 0;
const int Bagagem::BAGAGEM_MAX = 4;

void Bagagem::validar(string Bagagem)
{
    // transformar string bagagem para inteiro e verificar 0 <= Bagagem <= 4

    int Bagagem_int = stoi(Bagagem);

    if ((Bagagem_int < BAGAGEM_MIN) || (Bagagem_int > BAGAGEM_MAX))
    {
        // cout << "Validar Bagagem falhou!" << endl;
        // cout << "Valor invalido: " << Bagagem << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Bagagem::setBagagem(string Bagagem)
{
    validar(Bagagem);
    this->Bagagem = Bagagem;
}

//Metodos da classe CodigoBanco - XXX - X de 0 a 9

const int CodigoBanco::QUANTIDADE_NUMEROS = 3;
const int CodigoBanco::MENOR_VALOR_VALIDO = 0;
const int CodigoBanco::MAIOR_VALOR_VALIDO = 999;

void CodigoBanco::validar(string Codigo)
{

    if(Codigo.size() != QUANTIDADE_NUMEROS)
    {
        // cout << "Validar Codigo Banco falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
    }

    int Banco_int = stoi(Codigo);

    if(Banco_int < MENOR_VALOR_VALIDO || Banco_int > MAIOR_VALOR_VALIDO)
    {
        // cout << "Validar Codigo Banco falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
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
const int CodigoCarona::MAIOR_VALOR_VALIDO = 9999;

void CodigoCarona::validar(string Codigo)
{
    if(Codigo.size() != QUANTIDADE_NUMEROS){
        // cout << "Validar Codigo Carona falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
    }

    int Carona_int = stoi(Codigo);

    if(Carona_int < MENOR_VALOR_VALIDO || Carona_int > MAIOR_VALOR_VALIDO)
    {
        // cout << "Validar Codigo Carona falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
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
const int CodigoReserva::MAIOR_VALOR_VALIDO = 99999;

void CodigoReserva::validar(string Codigo)
{
    if(Codigo.size() != QUANTIDADE_NUMEROS){
        // cout << "Validar Codigo Reserva falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
    }

    int Reserva_int = stoi(Codigo);

    if(Reserva_int < MENOR_VALOR_VALIDO || Reserva_int > MAIOR_VALOR_VALIDO)
    {
        // cout << "Validar Codigo Reserva falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
    }
}

void CodigoReserva::setCodigoReserva(string CodigoReserva)
{
    CodigoReserva::validar(CodigoReserva);
    this->CodigoReserva = CodigoReserva;
}

// Metodos da classe Cidade - 10 caracteres - letra ponto ou espa�o
// pelo menos 1 caractere eh letra
// nao ha espacos seguidos
// antes de ponto ha uma letra
void Cidade::validar(string nova_cidade)
{

    int SUCESSO = 0;
    char aux;
    char aux2;
    int i;
    int tamanho_real_palavra;
    int tem_letra = 1;

    tamanho_real_palavra = nova_cidade.size();

    i = 0;
    while(i < tamanho_real_palavra)
    {

        if((isalpha(nova_cidade[i])))
        {
            //checa se existem letras e nao apenas caracteres invalidos
            tem_letra = 0;
        }

        aux = nova_cidade[i];
        aux2 = nova_cidade[i+1];

        if(i>0)
        {
            // checa se existe letra antes do ponto
            if((nova_cidade[i] == '.'))
            {
                if( (isalpha(nova_cidade[i-1])) )
                {
                    SUCESSO = 0;
                }
                else
                {
                    SUCESSO = 1;
                }
            }
        }

        if(i != (tamanho_real_palavra - 1))
        {
            //checa espacos vazios seguidos
            if((isspace(aux)) && (isspace(aux2)))
            {
                SUCESSO = 1;
            }
        }

        i++;

    }

    if(tem_letra == 1)
    {
        SUCESSO = 1;
    }

    if((SUCESSO != 0))
    {
        throw invalid_argument("Cidade invalida");
    }

}

void Cidade::setCidade(string nova_cidade)
{
    validar(nova_cidade);
    int k = 0;
    while(k < TAMANHO_ESPERADO)
    {
        this->cidade[k] = nova_cidade[k];
        k++;
    }
}

// Metodos da classe Data - 6 caracteres
// Formato: DD/MM/AA onde 1 <= MM <= 12, 00 <= AA <= 99, 1 <= DD <= 31
// Deve se considerar anos bissextos
// Suposi��o de que nao serao criadas datas para o seculo passado
// Ao se declarar o ano como "99", consideramos 2099.
// Entrada: 251298 se queremos expressar 25/12/2098
// No output final se fara print com as divisoes

void Data::setData(string nova_data)
{
    int data_int = 0;

    data_int = ( (nova_data[5]-48) + ( (nova_data[4]-48)*10 ) + ( (nova_data[3]-48)*100 )
    + ( (nova_data[2]-48)*1000 ) + ( (nova_data[1]-48)*10000) + ((nova_data[0]-48)*100000) );

    validar(data_int);

    int k;

    for(k = 0; k < 6; k++)
    {
        //copia a nova entrada e define seu limite
        data[k] = nova_data[k];
    }

    data[6] = '\0';
}

void Data::validar(int data_int)
{
    // cout << "DATA_INT: " << data_int << endl;

    int SUCESSO = 0;

    int num_dia = 0;
    int num_mes = 0;
    int num_ano = 0;

    int ano_validar_bissexto = 0;
    int fevereiro = 2;
    int limite_dias_fevereiro_ano_bissexto = 29;

    num_ano = data_int%100;
    // cout << "NUM_ANO: " << num_ano << endl;
    data_int = data_int/100;

    num_mes = data_int % 100;
    // cout << "NUM_MES: " << num_mes << endl;
    data_int = data_int/100;

    num_dia = data_int % 100;
    // cout << "NUM_DIA: " << num_dia << endl;
    data_int = data_int/100;

    if((num_dia > 31) || (num_dia <= 0))
    {
        SUCESSO = 1;
    }

    if((num_mes > 12) || (num_mes <= 0))
    {
        SUCESSO = 1;
    }

    if((num_ano > 99) || (num_ano <= 0))
    {
        // ano n�o pode ser 0, no caso, ano 2000 < ano 2099 (caso de evento passado)
        SUCESSO = 1;
    }

    // adiciona 2000 para termos o numero no formato completo
    // (temos numero 19, 2000 + 19 = 2019, um ano expresso por inteiro)
    ano_validar_bissexto = num_ano + 2000;

    if((ano_validar_bissexto % 4 == 0) && (ano_validar_bissexto % 100 != 0))
    {
        //validamos ano bissexto
        //TEMOS UM ANO BISSEXTO!
        if((num_mes == fevereiro) && (num_dia > limite_dias_fevereiro_ano_bissexto))
        {
            //avisamos formato invalido de ano bissexto
            SUCESSO = 1;
        }
    }

    if(SUCESSO != 0)
    {
        throw invalid_argument("Data de evento invalida");
    }

}

// Metodos da classe Duracao - 1 a 48

const int Duracao::DURACAO_MIN = 1;
const int Duracao::DURACAO_MAX = 48;

void Duracao::validar(string Duracao)
{
    // transformar string Duracao para inteiro e verificar 1 <= Duracao <= 48
    int Duracao_int = stoi(Duracao);

    if ((Duracao_int < DURACAO_MIN) || (Duracao_int > DURACAO_MAX))
    {
        // cout << "Validar Duracao falhou!" << endl;
        // cout << "Valor invalido: " << Duracao << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Duracao::setDuracao(string Duracao)
{
    validar(Duracao);
    this->Duracao = Duracao;
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

// Metodos da classe Preco - 1,00 a 5000,00

const float Preco::PRECO_MIN = 1.00;
const float Preco::PRECO_MAX = 5000.00;

void Preco::validar(string Preco)
{
    // transformar string Preco para float e verificar 1,00 <= Preco <= 5000,00

    float Preco_float = stof(Preco);

    if (Preco_float < PRECO_MIN || Preco_float > PRECO_MAX)
    {
        // cout << "Validar Preco falhou!" << endl;
        // cout << "Valor invalido: " << Preco << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Preco::setPreco(string Preco)
{
    validar(Preco);
    this->Preco = Preco;
}

// Metodos da classe Vagas - 0 a 4

const int Vagas::VAGAS_MIN = 0;
const int Vagas::VAGAS_MAX = 4;

void Vagas::validar(string Vagas)
{
    // transformar string Vagas para inteiro e verificar 0 <= Vagas <= 4

    int Vagas_int = stoi(Vagas);

    if ((Vagas_int < VAGAS_MIN) || (Vagas_int > VAGAS_MAX))
    {
        // cout << "Validar Vagas falhou!" << endl;
        // cout << "Valor invalido: " << Vagas << endl;
        throw invalid_argument ("Argumento invalido.");
    }

}

void Vagas::setVagas(string Vagas)
{
    validar(Vagas);
    this->Vagas = Vagas;
}

