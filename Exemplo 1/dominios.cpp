/**
 * @file dominios.cpp
 *
 * @brief Arquivo com a implementa&ccedil;&atilde;o dos m&eacute;todos das Classes de Dom&iacute;nios
 *
 * @section a Descri&ccedil;&atilde;o
 * Cont&eacute;m os m&eacute;todos de valida&ccedil;&atilde;o e define as Classes de Dom&iacute;nios
 *
 * @author Lu&iacute;s Capelletto
 * @author Rafael Barbosa
 *
 */

#include "dominios.h"

// Definicoes de metodos das classes de Dominio

// Metodos da classe Assento - D ou T

// Definicoes de constantes
const string Assento::Dianteiro = "D";
const string Assento::Traseiro = "T";

void Assento::validar(string assento)
{
    // Se a string assento passada for diferente de D e T
    if ( (assento.compare(Dianteiro) != 0) && (assento.compare(Traseiro) != 0) )
    {
        throw invalid_argument ("Assento invalido.");
    }
}

void Assento::setAssento(string assento)
{
    validar(assento);
    this->assento = assento;
}

// Metodos da classe Bagagem - 0 a 4

const int Bagagem::BAGAGEM_MIN = 0;
const int Bagagem::BAGAGEM_MAX = 4;

void Bagagem::validar(string bagagem)
{
    // transformar string bagagem para inteiro e verificar 0 <= Bagagem <= 4

    int bagagem_int = stoi(bagagem);

    if ((bagagem_int < BAGAGEM_MIN) || (bagagem_int > BAGAGEM_MAX))
    {
        throw invalid_argument ("Bagagem invalida.");
    }
}

void Bagagem::setBagagem(string bagagem)
{
    validar(bagagem);
    this->bagagem = bagagem;
}

//Metodos da classe CodigoBanco - XXX - X de 0 a 9

const int CodigoBanco::QUANTIDADE_NUMEROS = 3;
const int CodigoBanco::MENOR_VALOR_VALIDO = 0;
const int CodigoBanco::MAIOR_VALOR_VALIDO = 999;

void CodigoBanco::validar(string codigo)
{
    if(codigo.size() != QUANTIDADE_NUMEROS)
    {
        // cout << "Validar Codigo Banco falhou!" << endl;
        // cout << "Valor invalido: " << Codigo << endl;
        throw invalid_argument("Argumento invalido.");
    }

    int banco_int = stoi(codigo);

    if(banco_int < MENOR_VALOR_VALIDO || banco_int > MAIOR_VALOR_VALIDO)
    {
        throw invalid_argument("Codigo Banco invalido.");
    }
}

void CodigoBanco::setCodigoBanco(string codigoBanco)
{
    CodigoBanco::validar(codigoBanco);
    this->codigoBanco = codigoBanco;
}

//Metodos da classe CodigoCarona - XXXX - X de 0 a 9

const int CodigoCarona::QUANTIDADE_NUMEROS = 4;
const int CodigoCarona::MENOR_VALOR_VALIDO = 0;
const int CodigoCarona::MAIOR_VALOR_VALIDO = 9999;

void CodigoCarona::validar(string codigo)
{
    if(codigo.size() != QUANTIDADE_NUMEROS)
    {
        throw invalid_argument("Codigo de Carona invalido.");
    }

    int carona_int = stoi(codigo);

    if(carona_int < MENOR_VALOR_VALIDO || carona_int > MAIOR_VALOR_VALIDO)
    {
        throw invalid_argument("Argumento invalido.");
    }
}

void CodigoCarona::setCodigoCarona(string codigoCarona)
{
    CodigoCarona::validar(codigoCarona);
    this->codigoCarona = codigoCarona;
}

//Metodos da classe CodigoReserva - XXXXX - X de 0 a 9

const int CodigoReserva::QUANTIDADE_NUMEROS = 5;
const int CodigoReserva::MENOR_VALOR_VALIDO = 0;
const int CodigoReserva::MAIOR_VALOR_VALIDO = 99999;

void CodigoReserva::validar(string codigo)
{
    if(codigo.size() != QUANTIDADE_NUMEROS)
    {
        throw invalid_argument("Codigo de Reserva invalido.");
    }

    int reserva_int = stoi(codigo);

    if(reserva_int < MENOR_VALOR_VALIDO || reserva_int > MAIOR_VALOR_VALIDO)
    {
        throw invalid_argument("Codigo de Reserva invalido.");
    }
}

void CodigoReserva::setCodigoReserva(string codigoReserva)
{
    CodigoReserva::validar(codigoReserva);
    this->codigoReserva = codigoReserva;
}

// Metodos da classe Cidade - 10 caracteres - letra ponto ou espaço
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

        if( isalpha(nova_cidade[i]) )
        {
            //checa se existem letras e nao apenas caracteres invalidos
            tem_letra = 0;
        }

        aux = nova_cidade[i];
        aux2 = nova_cidade[i+1];

        if(i>0)
        {
            // checa se existe letra antes do ponto
            if(nova_cidade[i] == '.')
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
            if( (isspace(aux)) && (isspace(aux2)) )
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

// Metodos da classe CPF XXXXXXXXX-XX

// Checar se o CPF tem 12 digitos
// suponho que a entrada eh um numero sem pontos mas com separador

const int CPF::TAMANHO = 12;

void CPF::validar (string cpf)
{
    int i = 0;

	// checa o tamanho da string
    if(cpf.size() != TAMANHO)
        throw invalid_argument("CPF invalido.");

    // checa se tem '-' na posicao correta
    if (cpf[9] != '-')
        throw invalid_argument("CPF invalido.");

    // checa se possui apenas numeros
    for(i = 0; i < TAMANHO; i++)
    {
        if( isdigit(cpf[i]) == false )
        {
            if (i != 9)
                throw invalid_argument("CPF invalido.");
        }
    }

    // checa os digitos verificadores

	// digito verificador 1
    int digito_verficador_1;

    int soma = 0, peso = 0;

	int j = 10;

    while(j > 1)
    {
		for(i = 0; i < 9; i++)
		{
        	peso = (cpf[i] -'0')*j;
			soma += peso;
			j--;
		}

    }

	int resto = soma%11;

	if (resto < 2)
	{
		digito_verficador_1 = 0;
	}else
	{
		digito_verficador_1 = 11 - resto;
	}

	// cout << "digito verificador 1: " << digito_verficador_1 << endl;

	if ( (cpf[10] - '0') != digito_verficador_1)
	{
		// cout << "Validar CPF falhou! digito verificador 1 invalido" << endl;
        // cout << "CPF invalido: " << cpf << endl;
        throw invalid_argument("CPF invalido.");
	}

	// checa digito verificador 2

	j = 11;
    soma = 0; // zera soma

	while(j > 1)
    {
		for(i = 0; i < 11; i++)
		{
			if (i != 9)
			{
        		peso = (cpf[i] -'0')*j;
				soma += peso;
				j--;
			}
		}

    }

    int digito_verficador_2;
	int resto2 = soma%11;

	if (resto2 < 2)
	{
		digito_verficador_2 = 0;
	}else
	{
		digito_verficador_2 = 11 - resto;
	}

	// cout << "digito verificador 2: " << digito_verficador_2 << endl;

	if ( (cpf[11] - '0') != digito_verficador_2)
	{
		// cout << "Validar CPF falhou! digito verificador 2 invalido" << endl;
        // cout << "CPF invalido: " << cpf << endl;
        throw invalid_argument("CPF invalido.");
	}

}

void CPF::setCPF (string cpf)
{
    validar(cpf);
    this->cpf = cpf;
}

// Metodos da classe Data - 10 caracteres
// Formato: DD/MM/AAAA onde 1 <= MM <= 12, 2000 <= AA <= 2099, 1 <= DD <= 31
// Deve se considerar anos bissextos

const int Data::TAMANHO_MAX = 10;

void Data::validar(string data)
{
    // checa tamanho
    if(data.size() > TAMANHO_MAX)
    {
        throw invalid_argument("Data invalida. Formato invalido!");
    }

    // checa formato
    if(data[2] != '/' || data[5] != '/')
    {
        throw invalid_argument("Data invalida. Formato invalido!");
    }

    // checa os numeros representados por DD MM e AAAA

    char dia[3], mes[3], ano[5];

    dia[0] = data[0];
    dia[1] = data[1];
    dia[2] = '\0';

    int dia_int = stoi(dia);

    // 1 <= DD <= 31
    if(dia_int < 1 || dia_int > 31)
    {
        throw invalid_argument("Data invalida. Dia invalido!");
    }

    mes[0]= data[3];
    mes[1]= data[4];
    mes[2] = '\0';

    int mes_int = stoi(mes);

    // 1 <= MM <= 12
    if(mes_int < 1 || mes_int > 12)
    {
        throw invalid_argument("Data invalida. Mes invalido!");
    }

    ano[0] = data[6];
    ano[1] = data[7];
    ano[2] = data[8];
    ano[3] = data[9];
    ano[4] = '\0';

    int ano_int = stoi(ano);

    // 2000 <= AA <= 2099
    if(ano_int < 2000 || ano_int > 2099)
    {
        throw invalid_argument("Data invalida. Ano invalido!");
    }

    // checar anos bissextos
    // 1- Todo ano divisivel por 4 eh bissexto
    // 2- Todo ano divisivel por 100 nao eh bissexto
    // 3- Mas se o ano for tambem divisivel por 400 � bissexto

    // se o mes for de fevereiro
    if (mes_int == 2)
    {
        // checa se tem 29 dias ou menos
        if(dia_int > 29)
        {
            throw invalid_argument("Data invalida. Fevereiro tem apenas 28 ou 29 dias!");
        }

        // Ano eh bissexto
        if (ano_int%4 == 0 && ano_int%400 == 0)
        {
            if(dia_int > 29)
            {
                throw invalid_argument("Data invalida. Ano bissexto, fevereiro tem 29 dias!");
            }
        }
        else  // Ano nao eh bissexto
        {
            if(dia_int > 28)
            {
                throw invalid_argument("Data invalida. Ano nao eh bissexto, fevereiro tem 28 dias!");
            }
        }
    }
}

void Data::setData(string data)
{
    validar(data);
    this->data = data;
}

// Metodos da classe Duracao - 1 a 48

const int Duracao::DURACAO_MIN = 1;
const int Duracao::DURACAO_MAX = 48;

void Duracao::validar(string duracao)
{
    // transformar string Duracao para inteiro e verificar 1 <= Duracao <= 48
    int duracao_int = stoi(duracao);

    if ((duracao_int < DURACAO_MIN) || (duracao_int > DURACAO_MAX))
    {
        throw invalid_argument ("Duracao invalida.");
    }
}

void Duracao::setDuracao(string duracao)
{
    validar(duracao);
    this->duracao = duracao;
}

// Metodos da classe Estado -
//  {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG",
//  "PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

const string Estado::ESTADOS_VALIDOS[27] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG",
    "PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

void Estado::validar(string estado)
{
    bool notExists = (std::find(std::begin(ESTADOS_VALIDOS),
                    std::end(ESTADOS_VALIDOS), estado) == std::end(ESTADOS_VALIDOS));

    if(notExists)
    {
        //cout << "Validar estado falhou!" << endl;
        throw invalid_argument("Estado invalido.");
    }
}

void Estado::setEstado(string estado)
{
    Estado::validar(estado);
    this->estado = estado;
}

// Metodos da classe Email - 1 a 20 caracteres - a-z ou ponto '.'
// Formato: local@dominio.com
// local nao pode iniciar nem terminar com ponto
// dominio nao pode iniciar com ponto
// nao pode haver pontos em sequencia

const int Email::TAMANHO_MAX = 20;

void Email::validar(string email)
{
	unsigned int i = 0;

	// checa tamanho
    if(email.size() > TAMANHO_MAX)
	{
		throw invalid_argument("Email invalido. Tamanho invalido!");
	}

	// checa se local comeca com ponto
	if(email[0] == '.' || email[0] == '@')
	{
		throw invalid_argument("Email invalido. Local comeca com ponto ou arroba!");
	}

	// checa se arroba ou ponto esta no final
	if(email[email.size()-1] == '@' || email[email.size()-1] == '.')
	{
		throw invalid_argument("Email invalido. Ponto ou arroba no final!");
	}

	// checa caracteres - letra a-z ou ponto
	for(i = 0; i < email.size(); i++)
	{
		// checa se possui ponto repetido ou irregular
		if(isalpha(email[i]) == false)
		{
			if (email[i] == '@' || email[i] == '.')
			{
				if(email[i-1] == '.' || email[i+1] == '.')
				{
					throw invalid_argument("Email invalido. Ponto irregular!");
				}
			}

		}

		// checa se tem numeros
		if(isdigit(email[i]))
		{
			throw invalid_argument("Email invalido. Possui numero!");
		}

		// checa se tem letra maiuscula
		if(isupper(email[i]))
		{
			throw invalid_argument("Email invalido. Possui letra maiuscula!");
		}
	}

	unsigned int conta_arroba = 0;

	// checa se possui '@' mais de uma vez
	for(i = 0; i < email.size(); i++)
	{
		if(email[i] == '@')
		{
			conta_arroba++;
		}
	}

	if(conta_arroba > 1 || conta_arroba == 0)
	{
		throw invalid_argument("Email invalido. Nao Possui ou tem mais de 1 arroba!");
	}

}

void Email::setEmail(string email)
{
    validar(email);
    this->email = email;
}

// Metodos da classe Nome

const unsigned int Nome::TAMANHO_MIN = 1;
const unsigned int Nome::TAMANHO_MAX = 20;

void Nome::validar(string nome)
{
    if( nome.size() <  Nome::TAMANHO_MIN || nome.size() > Nome::TAMANHO_MAX)
    {
        throw invalid_argument ("Argumento invalido.");
    }

    bool naoTemLetra = true;

    for(unsigned int i = 0; i < nome.size(); i++)
    {
        bool temLetra = isalpha(nome[i]);
        if(temLetra)
        {
            naoTemLetra = false;
            break;
        }
    }

    bool nemTodosCaracteresValidos = false; // caracteres sao letras, espaços ou pontos

    for(unsigned int i = 0; i < nome.size(); i++)
    {
        bool invalido = !(isalpha(nome[i]) || nome[i] == ' ' || nome[i] == '.');
        if(invalido)
        {
            nemTodosCaracteresValidos = true;
            break;
        }
    }

    bool temPontoSemLetraAntes = false;

    for(unsigned int i = 0; i < nome.size(); i++)
    {
        if(nome[i] == '.')
        {
            if( i == 0 )
            {
                temPontoSemLetraAntes = true;
                break;
            }
            else if( !isalpha(nome[i-1]) )
            {
                temPontoSemLetraAntes = true;
                break;
            }
        }
    }

    bool temEspacosEmSequencia = false;
    for(unsigned int i = 0; i < nome.size(); i++)
    {
        if(nome[i] == ' ' && (i != nome.size() - 1))
        {
            if(nome[i+1] == ' ')
            {
                temEspacosEmSequencia = true;
                break;
            }
        }
    }

    if(naoTemLetra || nemTodosCaracteresValidos ||
       temPontoSemLetraAntes || temEspacosEmSequencia)
    {
        throw invalid_argument ("Nome invalido.");
    }

}

void Nome::setNome(string nome)
{
    validar(nome);
    this->nome = nome;
}

// Metodos da classe Agencia - XXXX-Y - 0 a 9
// Digito verificador Y - algoritmo de Luhn

const int Agencia::TAMANHO = 6;

void Agencia::validar(string agencia)
{
    // checa tamanho
    if(agencia.size() != TAMANHO)
	{
		throw invalid_argument("Agencia invalida.");
	}

    // checa se tem '-' na posicao correta
    if (agencia[4] != '-')
	{
		throw invalid_argument("Agencia invalida.");
	}

    int i = 0;

    // checa se possui apenas numeros
    for(i = 0; i < TAMANHO; i++)
    {
        if( isdigit(agencia[i]) == false )
        {
            if (i != 4)
            {
                throw invalid_argument("Agencia invalida.");
            }
        }
    }

	// aplicando algoritmo de Luhn

	int peso = 0, soma = 0;
	int resto = 0, quociente = 0;

	// indices pares tem peso 1
	for(i = 0; i < 4; )
	{
		peso = (agencia[i] - '0');
		soma += peso;
		i = i+2;
	}

	// indices impares tem peso 2
	for(i = 1; i < 4; )
	{
		peso = (agencia[i] - '0')*2;

		if(peso > 9)
		{
			quociente = peso/10;
			resto = peso%10;
			peso = resto + quociente;
		}

		soma += peso;
		i = i+2;
	}

	resto = soma%10;
	int digito_verificador = 10 - resto;

	if (agencia[5] - '0' != digito_verificador)
	{
		throw invalid_argument("Agencia invalida, digito verificador invalido!");
	}

}

void Agencia::setAgencia(string agencia)
{
    validar(agencia);
    this->agencia = agencia;
}

// Metodos da classe Conta - XXXXXX-Y - 0 a 9
// Digito verificador Y - algoritmo de Luhn

const int NumeroConta::TAMANHO = 8;

void NumeroConta::validar(string conta)
{
    // checa tamanho
    if(conta.size() != TAMANHO)
	{
		throw invalid_argument("Conta invalida.");
	}

    // checa se tem '-' na posicao correta
    if (conta[6] != '-')
	{
		throw invalid_argument("Conta invalida.");
	}

    int i = 0;

    // checa se possui apenas numeros
    for(i = 0; i < TAMANHO; i++)
    {
        if( isdigit(conta[i]) == false )
        {
            if (i != 6)
            {
                throw invalid_argument("Conta invalida.");
            }
        }
    }

	// aplicando algoritmo de Luhn

	int peso = 0, soma = 0;
	int resto = 0, quociente = 0;

	// indices pares tem peso 1
	for(i = 0; i < 6; )
	{
		peso = (conta[i] - '0');
		soma += peso;
		i = i+2;
	}

	// indices impares tem peso 2
	for(i = 1; i < 6; )
	{
		peso = (conta[i] - '0')*2;

		if(peso > 9)
		{
			quociente = peso/10;
			resto = peso%10;
			peso = resto + quociente;
		}

		soma += peso;
		i = i+2;
	}

	resto = soma%10;
	int digito_verificador = 10 - resto;

	if (conta[7] - '0' != digito_verificador)
	{
		throw invalid_argument("Conta invalida, digito verificador invalido!");
	}

}

void NumeroConta::setConta(string conta)
{
    validar(conta);
    this->conta = conta;
}

// Metodos da classe Preco - 1,00 a 5000,00

const float Preco::PRECO_MIN = 1.00;
const float Preco::PRECO_MAX = 5000.00;

void Preco::validar(string preco)
{
    // transformar string Preco para float e verificar 1,00 <= Preco <= 5000,00

    float preco_float = stof(preco);

    if (preco_float < PRECO_MIN || preco_float > PRECO_MAX)
    {
        throw invalid_argument ("Argumento invalido.");
    }
}

void Preco::setPreco(string preco)
{
    validar(preco);
    this->preco = preco;
}

// Metodos da classe Telefone XX-YY-ZZZZZZZZZ

const unsigned int Telefone::TAMANHO = 15;  //Tamanho da string Telefone

void Telefone::validar(string telefone)
{
    if(telefone.size() != Telefone::TAMANHO ||  // Telefone deve ter 15 caracteres
       (telefone[2] != '-' || telefone[5] != '-'))  // Telefone segue o formato XX-YY-ZZZZZZZZZ
    {
        throw invalid_argument ("Argumento invalido.");
    }
    string xx = {telefone[0],telefone[1]};
    string yy = {telefone[3],telefone[4]};
    string zz = {telefone[6],telefone[7],telefone[8],
                telefone[9],telefone[10],telefone[11],
                telefone[12],telefone[13],telefone[14]};

    int xx_int = stoi(xx);
    int yy_int = stoi(yy);
    int zz_int = stoi(zz);

    if( (xx_int <= 0 || xx_int > 99) ||
        (yy_int <= 0 || yy_int > 99) ||
        (zz_int <= 0 || zz_int > 999999999))
    {
        throw invalid_argument ("Telefone invalido.");
    }
}

void Telefone::setTelefone(string telefone)
{
    validar(telefone);
    this->telefone = telefone;
}

// Metodos da classe Senha - XXXXX - (a-z ou A-Z, 0 a 9, #,$,%,&)
// Pelo menos uma letra e um digito
// Nao pode haver caracteres repetidos

const int Senha::TAMANHO = 5;

void Senha::validar(string senha)
{

	// checa tamanho
    if(senha.size() != TAMANHO)
	{
		throw invalid_argument("Senha invalida. TAMANHO");
	}

	int i = 0;

	for(i = 0; i < Senha::TAMANHO; i++)
	{
		// checa se possui apenas letras ou numeros
		if(isalnum(senha[i]) == false)
		{
			// se nao for letra ou numero, pode ser um dos simblos #,$,%,&
			if (senha[i] != '#' && senha[i] != '$' && senha[i] != '%' && senha[i] != '&')
            {
				// cout << "Senha possui caractere invalido: " << Senha[i] << endl;
				throw invalid_argument("Senha invalida, possui caractere invalido");

			}
		}

	}

    // checa se ha caracteres repetidos
    map<char,int> contarletras;

    for (i = 0; i < Senha::TAMANHO; i++)
        contarletras[senha[i]]++;

    for (map<char, int>::iterator it = contarletras.begin(); it != contarletras.end(); ++it)
	{
		if(it->second != 1)
		{
			// cout << "caractere repetido: ";
			// cout << it->first << ": " << it->second << endl;
			throw invalid_argument("Senha invalida, possui caractere repetido");
		}
	}

    bool tem_letra = false;
    bool tem_numero = false;

    // checa se ha pelo menos uma letra ou numero
    for(i = 0; i < TAMANHO; i++)
	{
		if(isdigit(senha[i]) == true)
		{
		    tem_letra = true;
		}

		if(isalpha(senha[i]) == true)
		{
            tem_numero = true;
		}
	}

    if(tem_numero == false)
    {
        throw invalid_argument("Senha invalida, nao tem numero");
    }

    if(tem_letra == false)
    {
        throw invalid_argument("Senha invalida, nao tem letra");
    }
}

void Senha::setSenha(string senha)
{
    validar(senha);
    this->senha = senha;
}

// Metodos da classe Vagas - 0 a 4

const int Vagas::VAGAS_MIN = 0;
const int Vagas::VAGAS_MAX = 4;

void Vagas::validar(string vagas)
{
    // transformar string Vagas para inteiro e verificar 0 <= Vagas <= 4

    int vagas_int = stoi(vagas);

    if ((vagas_int < VAGAS_MIN) || (vagas_int > VAGAS_MAX))
    {
        // cout << "Validar Vagas falhou!" << endl;
        // cout << "Valor invalido: " << Vagas << endl;
        throw invalid_argument ("Numero de Vagas invalido.");
    }
}

void Vagas::setVagas(string vagas)
{
    validar(vagas);
    this->vagas = vagas;
}

