#include <iostream>//Salvando a primeira varialvel mas nao excluindo e nem editando a.Salvando a seguinte e por assim em diante.
#include <stdlib.h>
#include <locale>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
using namespace std;
fstream arquivo;
struct Teatro
{
	char nome[100];
	double prec;
	double prec1;
	int horarioh;
	int horariom;
	int faxaetaria;
	int dia;
	int diames;
	int diaano;
	char diasemana[20];
	char n[20];
	bool excluido;
} cartaz;

Teatro lista[100];
Teatro  lerop()
{

	arquivo.seekp(0, arquivo.end);
	cout << " _____________________________" << endl;
	cout << "|Cadastro das peças de Teatro |" << endl;
	cout << "|_____________________________|" << endl;
	cout << endl;



	cout << "Entre com o codigo da peça." << endl;
	cout << "___________________________" << endl;
	cin >> cartaz.n;
	cout << endl;
	cin.ignore();



	cout << "Entre com o nome da peça:\n" ;
	cout << "_______________________________________\n -->";
	cin.getline(cartaz.nome, 100);
	cout << endl;

	do
	{
		cout << "Entre com o preço  inteiro da peça:\n";
		cout << "_______________________________________\n --> R$";
		cin >> cartaz.prec;
		cout << endl;

	}
	while(!(cartaz.prec > 0));
	do
	{
		cout << "Entre com o preço da meia entrada da peça:\n";
		cout << "_______________________________________\n --> R$";
		cin >> cartaz.prec1;
		cout << endl;

	}
	while(!(cartaz.prec1 > 0) );
	do
	{
		cout << "Entre com a hora da peça:\n";
		cout << "_______________________________________\n -->";
		cin >> cartaz.horarioh;
		cout << endl;

	}
	while(!(cartaz.horarioh >= 0) );

	do
	{
		cout << "Entre com o minuto da peça:\n";
		cout << "_______________________________________\n -->";
		cin >> cartaz.horariom;
		cout << endl;

	}
	while(!(cartaz.horariom >= 0) );
	do
	{
		cout << "Entre com a faixa etária da peça:\n " ;
		cout << "_______________________________________\n -->";
		cin >> cartaz.faxaetaria;
		cout << endl;

	}
	while(!(cartaz.faxaetaria >= 0) );
	do
	{
		cout << "Entre com o dia da apresentação:\n ";
		cout << "_______________________________________\n -->";
		cin >> cartaz.dia;
		cout << endl;

	}
	while(!(cartaz.dia > 0) && (cartaz.dia < 32) );
	do
	{
		cout << "Entre com o mes  apresentação(01-12):\n ";
		cout << "_______________________________________\n -->";
		cin >> cartaz.diames;
		cout << endl;

	}
	while(!(cartaz.diames > 0) && (cartaz.diames < 13) );
	do
	{
		cout << "Entre com o ano apresentação:\n ";
		cout << "_______________________________________\n -->";
		cin >> cartaz.diaano;
		cout << endl;
		cin.ignore();
	}
	while(!(cartaz.diaano > 2017)  );
	do
	{
		cout << "Entre com o dia da semana:\n ";
		cout << " Sendo : Segunda-Feira,Terca-Feira,Quarta-Feira,Quinta-Feira," << endl;
		cout << "  Sexta-Feira,Sabado,Domingo" << endl;
		cout << "_______________________________________\n -->";
		cin.getline( cartaz.diasemana, 20);
		cout << endl;


	}
	while(! (strcmp(cartaz.diasemana, "Segunda-Feira") == 0 || strcmp(cartaz.diasemana, "Terca-Feira") == 0 || strcmp(cartaz.diasemana, "Quarta-Feita") == 0 || strcmp(cartaz.diasemana, "Quinta-Feira") == 0 || strcmp(cartaz.diasemana, "Sexta-Feira") == 0 || strcmp(cartaz.diasemana, "Sabado" ) == 0 || strcmp (cartaz.diasemana, "Domingo") == 0));
	cout << endl;


	cartaz.excluido = false;


	arquivo.write((char*) &cartaz , sizeof(cartaz));

	return cartaz;
}





void imprimirlista( )

{
	cout << " _________" << endl;
	cout << "|LISTA    |" << endl;
	cout << "|_________|" << endl;
	arquivo.seekg(0, arquivo.beg);
	while(arquivo.read((char*) &cartaz, sizeof(cartaz)))
	{

		if(cartaz.excluido == false)
		{

			cout << "--------------------------------------------------------------------------------" << endl;
			cout << "Opção [" << cartaz.n << "]" << endl;
			cout << "\nNome da peça: [" << cartaz.nome << "]" << endl;
			cout << "\nPreço do ingresso(Inteiro) peça: R$" << cartaz.prec << "Reais" << endl;
			cout << "\nPreço do ingresso(Meia) da peça: R$" << cartaz.prec1 << "Reais" << endl;
			if(((cartaz.horariom == 0) || (cartaz.horariom == 1) || (cartaz.horariom == 2) || (cartaz.horariom == 3) || (cartaz.horariom == 4) || (cartaz.horariom == 5) || (cartaz.horariom == 6) || (cartaz.horariom == 7) || (cartaz.horariom == 8) || (cartaz.horariom ==  9) ) && ( (cartaz.horarioh == 0) || (cartaz.horarioh == 1)  || (cartaz.horarioh == 2) || (cartaz.horarioh == 3) || (cartaz.horarioh == 4) || (cartaz.horarioh == 5) || (cartaz.horarioh == 6) || (cartaz.horarioh == 7) || (cartaz.horarioh == 8) || (cartaz.horarioh == 9)))
			{


				cout << "\nHorário da peça: 0" << cartaz.horarioh << ":0" << cartaz.horariom << endl;
			}
			else if ((cartaz.horariom == 0) || (cartaz.horariom == 1) || (cartaz.horariom == 2) || (cartaz.horariom == 3) || (cartaz.horariom == 4) || (cartaz.horariom == 5) || (cartaz.horariom == 6) || (cartaz.horariom == 7) || (cartaz.horariom == 8) || (cartaz.horariom == 9))
			{
				cout << "\nHorário da peça: " << cartaz.horarioh << ":0" << cartaz.horariom << endl;
			}
			else if((cartaz.horarioh == 0) || (cartaz.horarioh == 1)  || (cartaz.horarioh == 2) || (cartaz.horarioh == 3) || (cartaz.horarioh == 4) || (cartaz.horarioh == 5) || (cartaz.horarioh == 6) || (cartaz.horarioh == 7) || (cartaz.horarioh ==  8) || (cartaz.horarioh ==  9))

			{
				cout << "\nHorário da peça: 0" << cartaz.horarioh << ":" << cartaz.horariom << endl;
			}
			else
			{
				cout << "\nHorário da peça: " << cartaz.horarioh << ":" << cartaz.horariom << endl;
			}
			if(cartaz.faxaetaria == 0)
			{
				cout << "\nFaixa etária da peça: Livre Para Todos os Públicos" << endl;
			}
			else
			{
				cout << "\nFaixa etária da peça: " << cartaz.faxaetaria << " anos" << endl;
			}
			cout << "\nA data em que ocorrerá a peça : dia " << cartaz.dia << "/0" << cartaz.diames << "/" << cartaz.diaano << endl;
			cout << "\nO dia da semana em que ocorrerá a peça : " << cartaz.diasemana << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
		}

	}
	cout << "Pressione qualquer tecla para voltar ao menu inicial." << endl;
	arquivo.clear();

}
void removeropcao()
{


	char d[100];
	int k;
	cout << " ________________________________ " << endl;
	cout << "|Menu de Remoção                 |" << endl;
	cout << "|1-Entrar em remover peça.       |" << endl;
	cout << "|2-Sair e retornar para o menu.  |" << endl;
	cout << "|________________________________|" << endl;
	cin >> k;
	cin.ignore();

	while(k!=2)
	{
		switch(k)
		{


		case 1:
		{

			int aux = 0;
			system("cls");
			cout << "Entre com o nome da peça que deseje remover: " << endl;
			cin.getline(d, 100);


			arquivo.seekp(0, arquivo.beg);
			while(arquivo.read((char*) &cartaz, sizeof(cartaz)))
			{

				if(cartaz.excluido == false && (strcmp(d, cartaz.nome)) == 0 )
				{
					aux = 1;
					cartaz.excluido = true;

					arquivo.seekp(arquivo.tellp() - sizeof(cartaz));
					arquivo.write((char*) &cartaz, sizeof(cartaz));

				}

			}

			if(aux == 0)
			{
				cout << endl;
				cout << "Não encontrado.Tente novamente." << endl;
				cout << "Pressione qualquer tecla para retornar ao menu remover..." << endl;
				getch();


			}
			else
			{
				cout << endl;
				cout << "Excluido." << endl;
				cout << endl;
				cout << "Pressione qualquer teclapara retornar ao menu remover..." << endl;
				getch();

			}
			break;

		}
		case 2:

			break;


		}
		system("cls");

		cout << " ________________________________ " << endl;
		cout << "|Menu de Remoção                 |" << endl;
		cout << "|1-Entrar em remover  peça.      |" << endl;
		cout << "|2-Sair e retornar para o menu.  |" << endl;
		cout << "|________________________________|" << endl;
		cin >> k;
		cin.ignore();



	}
    system("cls");
	cout << "Saindo" << endl;
	cout << "Pressione qualquer tecla para retornar ao menu inicial..." << endl;
	arquivo.clear();

}
void loclizarop()

{
	int k;
	char nome[100];
	cout << " ________________________________ " << endl;
	cout << "|Menu de localização             |" << endl;
	cout << "|1-Entrar em localizar peça.     |" << endl;
	cout << "|2-Sair e retornar para o menu.  |" << endl;
	cout << "|________________________________|" << endl;
	cin >> k;
	cin.ignore();
	while(k!=2)

	{

		switch(k)
		{
		case 1:
		{
			system("cls");
			cout << "Entre com o nome da peça que deseja localizar." << endl;
			cin.getline(nome, 100);


			int aux = 0;
			arquivo.seekg(0, arquivo.beg);
			while(arquivo.read((char*) &cartaz, sizeof(cartaz)))
			{

				if(cartaz.excluido == false && strcmp(cartaz.nome, nome) == 0)
				{
					aux = 1;

					cout << endl;
					cout << "[Localizado]" << endl;
					cout << "---------------------------------------------------------------------------- -" << endl;
					cout << "Opção [" << cartaz.n << "]" << endl;
					cout << "\nNome da peça:  " << cartaz.nome << endl;
					cout << "\nPreço do ingresso(Inteiro) peça:R$" << cartaz.prec << " Reais" << endl;
					cout << "\nPreço do ingresso(Meia) da peça:R$" << cartaz.prec1 << " Reais" << endl;
					cout << "\nHorário da peça: " << cartaz.horarioh << " : " << cartaz.horariom << endl;
					cout << "\nFaixa Etária da peça: " << cartaz.faxaetaria << "anos" << endl;
					cout << "\nA data em que ocorrerá a peça é: dia " << cartaz.dia << "/" << cartaz.diasemana << "/" << cartaz.diaano << endl;
					cout << "\nO dia da semana em que ocorrerá a peça é: " << cartaz.diasemana << endl;
					cout << " ---------------------------------------------------------------------------- -" << endl;
					cout << endl;
					cout << "Pressione qualquer letra para retornar ao menu de localização." << endl;
					getch();

				}




			}
			arquivo.clear();
			if(aux == 0)
			{
				cout << endl;
				cout << "Não encontrado.Tente novamente." << endl;
				cout << endl;
				cout << "Pressione qualquer letra para voltar no menu de localiação." << endl;
			



			}

			getch();
			break;
		}
		case 2:
			break;
		}
		system("cls");

		cout << " ________________________________ " << endl;
		cout << "|Menu de localização             |" << endl;
		cout << "|1-Entrar em localizar peça.     |" << endl;
		cout << "|2-Sair e retornar para o menu.  |" << endl;
		cout << "|________________________________|" << endl;
		cin >> k;
		cin.ignore();


	}
	system("cls");
	cout << "Precione qualquer tecla para retornar ao menu..." << endl;





	arquivo.clear();
}

void editar()
{
	system("cls");
	int aux = 0;

	int n;

	int x;
	char f[100];
	cout << "  __________________________ " << endl;
	cout << " |Menu de Edição            |" << endl;
	cout << " |1 - Para entrar no editar |" << endl;
	cout << " |2 - Para sair do editar   |" << endl;
	cout << " |__________________________|" << endl;
	cin >> x;
	cout << endl;
	cin.ignore();

	while (x != 2)
	{


		switch(x)
		{
		case 1:
		{

			system("cls");
			cout << "Entre com o nome da peça que deseje editar" << endl;
			cin.getline(f, 100) ;



			arquivo.seekg(0, arquivo.beg);
			while(arquivo.read((char*) &cartaz, sizeof(cartaz)))
			{

				if(cartaz.excluido == false && (strcmp(cartaz.nome, f)) == 0 )
				{
					aux = 1;
					cout << "\t\t-----------OPCAO PARA ALTERACAO--------" << endl;
					cout << "\t\t\t 1 - Codigo da peça" << endl;
					cout << "\t\t\t 2 - Nome da peça" << endl;
					cout << "\t\t\t 3 - Preço da peça (inteira)" << endl;
					cout << "\t\t\t 4 - Preço da peça(meia)" << endl;
					cout << "\t\t\t 5 - Horário da peça" << endl;
					cout << "\t\t\t 6 - Faixa etária da peça" << endl;
					cout << "\t\t\t 7 - Data da peça" << endl;
					cout << "\t\t\t 8 - Mes em que ocorrerá a peça" << endl;
					cout << "\t\t\t 9 - Ano em que ocorrerá" << endl;
					cout << "\t\t\t10 - Dia da semana" << endl;
					cout << "\t\t\t11 - Sair" << endl;
					cin >> n;



					while(n != 11)
					{

						switch(n)
						{


						case 1:
						{
							system("cls");

							cout << "Entre com o codigo da peça." << endl;
							cout << "___________________________" << endl;
							cin >> cartaz.n;
							cout << endl;
							cin.get();

							break;
						}
						case 2:
						{
							system("cls");
							cout << "Entre com o nome da peça (sem espaços): \n" ;
							cout << "_______________________________________\n -- > ";
							cin.getline(cartaz.nome, 20);
							cout << endl;
							break;
						}
						case 3:
						{

							do
							{
								system("cls");
								cout << "Entre com o preço  inteiro da peça:\n";
								cout << "_______________________________________\n -- > R$";
								cin >> cartaz.prec;
								cout << endl;
							}
							while(!(cartaz.prec > 0));
							break;
						}
						case 4:
						{

							do
							{
								system("cls");
								cout << "Entre com o preço da meia entrada da peça:\n";
								cout << "_______________________________________\n -- > R$";
								cin >> cartaz.prec1;
							}
							while(!(cartaz.prec1 > 0) );
							break;

						}
						case 5:
						{

							do
							{
								system("cls");
								cout << "Entre com o horário da peça:\n";
								cout << "_______________________________________\n -- > ";
								cout << "Entre com a hora" << endl;
								cin >> cartaz.horarioh;
								cout << endl;
								cout << "Entre com o minuto" << endl;
								cin >> cartaz.horariom;
								cout << endl;
							}
							while(!(cartaz.horarioh >= 0) && (cartaz.horariom  >= 0) );
							break;
						}
						case 6:
						{

							do
							{
								system("cls");
								cout << "Entre com a faixa etária da peça:\n " ;
								cout << "_______________________________________\n -- > ";
								cin >> cartaz.faxaetaria;
								cout << endl;
							}
							while(!(cartaz.faxaetaria >= 0) );
							break;
						}
						case 7:
						{

							do
							{
								system("cls");
								cout << "Entre com a data da apresentação:\n ";
								cout << "_______________________________________\n -- > ";
								cin >> cartaz.dia;
								cout << endl;
								cin.ignore();
							}
							while(!(cartaz.dia > 0) && (cartaz.dia < 32) );
							break;
						}
						case 8:
						{

							do
							{
								system("cls");
								cout << "Entre com o mês(01-12):\n ";
								cout << "_______________________________________\n -- > ";
								cin >> cartaz.diames;
								cout << endl;
								cin.ignore();
							}
							while(!(cartaz.diames > 0) && (cartaz.diames < 13));
							break;
						}
						case 9:
						{

							do
							{
								system("cls");
								cout << "Entre com o ano:\n ";
								cout << "_______________________________________\n -- > ";
								cin >> cartaz.diaano;
								cout << endl;
								cin.ignore();
							}
							while(!(cartaz.diaano > 2017));
							break;
						}
						case 10:
						{

							do
							{
								system("cls");
								cout << "Entre com o dia da semana:\n ";
								cout << " Sendo : Segunda-Feira,Terca-Feira,Quarta-Feira,Quinta-Feira," << endl;
								cout << "  Sexta-Feira,Sabado,Domingo" << endl;
								cout << "_______________________________________\n -- > ";
								cin.getline( cartaz.diasemana, 20);
								cout << endl;

							}
							while(! (strcmp(cartaz.diasemana, "Segunda-Feira") == 0 || strcmp(cartaz.diasemana, "Terca-Feira") == 0 || strcmp(cartaz.diasemana, "Quarta-Feita") == 0 || strcmp(cartaz.diasemana, "Quinta-Feira") == 0 || strcmp(cartaz.diasemana, "Sexta-Feira") == 0 || strcmp(cartaz.diasemana, "Sabado" ) == 0 || strcmp (cartaz.diasemana, "Domingo") == 0));
							break;
						}
						case 11:
						{
							cout << "Edicao encerrada" << endl;
							system("pause");
							system ("cls");
							break;

						}


						}
						system("cls");
						cout << "\t\t-----------OPCAO PARA ALTERACAO--------" << endl;
						cout << "\t\t\t 1 - Codigo da peça" << endl;
						cout << "\t\t\t 2 - Nome da peça" << endl;
						cout << "\t\t\t 3 - Preço da peça (inteira)" << endl;
						cout << "\t\t\t 4 - Preço da peça(meia)" << endl;
						cout << "\t\t\t 5 - Horário da peça" << endl;
						cout << "\t\t\t 6 - Faixa etária da peça " << endl;
						cout << "\t\t\t 7 - Dia da peça " << endl;
						cout << "\t\t\t 8 - Mês da peça " << endl;
						cout << "\t\t\t 9 - Ano da peça " << endl;
						cout << "\t\t\t 10 - Dia da semana da peça " << endl;
						cout << "\t\t\t 11 - Sair" << endl;
						cin >> n;

						arquivo.seekp(arquivo.tellp() - sizeof (cartaz));
						arquivo.write((char*) &cartaz, sizeof(cartaz));

					}




					arquivo.read((char * ) & cartaz, sizeof(cartaz));

				}


			}
			break;
		}
		case 2:


			break;
		}
		arquivo.read((char * ) & cartaz, sizeof(cartaz));

		if(aux == 0)
		{
			cout << endl;
			cout << "Arquivo não encontrado" << endl;
			cout << "Tente novamente.Retornando ao menu de editar." << endl;
			cout << endl;
			cout << "Precissione qualquer letra para retornar..." << endl;
			cout << endl;
			getch();

		}

		system("cls");
		cout << "  __________________________ " << endl;
		cout << " |Menu de Edição            |" << endl;
		cout << " |1 - Para entrar no editar |" << endl;
		cout << " |2 - Para sair do editar   |" << endl;
		cout << " |__________________________|" << endl;
		cin >> x;
		cout << endl;
		cin.ignore();
	}
	system("cls");
	cout << "Saindo" << endl;
	cout << "Pressione qualquer tecla para retornar ao menu inicial..." << endl;
	arquivo.clear();



}
void menudeescolha()
{




	int op;

	do
	{
		system("cls");
		system("color F9");

		setlocale(LC_ALL, "");


		cout << "  _____________________________________" << endl;
		cout << " | Opções do menu do Teatro Genises:   | " << endl;
		cout << " |_____________________________________| " << endl;
		cout << "  ____________________________" << endl;
		cout << " | 1)Insir as informaçoes     | " << endl;
		cout << " | 2)Lista                    | " << endl;
		cout << " | 3)Remover                  | " << endl;
		cout << " | 4)localizar uma opção      | " << endl;
		cout << " | 5)Editar                   | " << endl;
		cout << " | 6)Sair                     | " << endl;
		cout << " |____________________________| " << endl;
		cout << endl;
		cout << endl;
		cout << "Entre com a opção: " << endl;
		cin >> op;
		switch(op)
		{
		case 1:
			system("cls");
			system("color E4");
			lerop();
			system("color F9");
			menudeescolha();


			break;

		case 2:
			system("cls");
			system("color 4E");
			imprimirlista();
			getch();
			system("color F9");
			menudeescolha();
			break;


		case 3:
			system("cls");
			system("color 2E");

			removeropcao();
			getch();
			system("color F9");
			menudeescolha();
			break;

		case 4:


			system("cls");
			system("color 4E");



			loclizarop();
			getch();
			system("color F9");
			menudeescolha();
			break;
		case 5 :
			system("cls");
			system("color 4B");

			editar();
			getch();
			system("color F9");
			menudeescolha();
			break;

		case 6:

			system("cls");
			system("color E9");
			cout << "Obrigado por usar esse programa.";



			getch();

			break;



		}
		if( op == 6)
		{
			break;
		}
	}
	while(op != 1 && op != 2 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6);


}


int main(int argc, char** argv)
{


	arquivo.open("Trabalho.txt", ios::in | ios::out | ios::binary);
	if(!arquivo.is_open())
		arquivo.open("Trabalho.txt", ios::in | ios::out | ios::trunc | ios::binary);

	cout << fixed << setprecision(2);



	setlocale(LC_ALL, "portuguese");
	cout << " <<< Sistema interativo do Teatro Genises>>>" << endl;
	cout << endl;
	cout << "Bem Vindo." << endl;
	cout << endl;
	cout << "Pressione qualquer tecla para entrar nas opções do menu inicial..." << endl;
	cout << endl;
	getch();
	cout << fixed << setprecision(2);
	menudeescolha();

	arquivo.close();
	return 0;
}




