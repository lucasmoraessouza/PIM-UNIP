#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <locale.h>

#define TAM 10

using namespace std;
int main(void) {
		
	struct infoMedico{
		string nomemed ="", espec="", crm = "";
	}medico[TAM];
	
	struct infoPacientes{
		string nomepac = "",datanasc_pac="";
		char sexopac;
		double cpf_pac, cep_pac, peso_pac, altura_pac;
	}paciente[TAM];
	
	struct infoAgendamentos{
		string nomepac = "", agend_pac = "";
		double cpf_pac;
	}agendamento[TAM];

	struct infoRelatorio{
	string id_paciente ="", relat_paciente="";
	}relatorio[TAM];
	
	FILE *relatoriojaneiro;
	char texto_jan [20];
	
	FILE *relatoriofevereiro;
	char texto_fev [20];
	
	FILE *relatoriomarco;
	char texto_marc[20];
	
	FILE *relatorioabril;
	char texto_abr [20];

	string login= "admin", senha="12345", entrada_login="", entrada_senha="";
	int opcao, concluir = 0, fim = 0, posMedico = 0, posPaciente = 0, posAgendamento = 0, posRelatorio =0, i = 0, entrada=0;
	double buscar;
	
	setlocale (LC_ALL, "portuguese");
	if (opcao > 10 || opcao < 0 ){
		cout << "Opc�o inv�lida" << endl;
		system ("cls");
	}

	cout << "*********************************************"<< endl;
	cout << "*************** TELA DE LOGIN ***************"<< endl;
	cout << "*********************************************"<< endl;
	cout << "LOGIN: ";
	cin >> (entrada_login);
	
	cout << "SENHA: ";
	cin >> (entrada_senha);
	if (login == entrada_login && senha == entrada_senha){
	do { 	
		system ("cls");
		cout << "Bem vindo administrador, selecione a op��o desejada: \n";
		cout << "\nO que voce deseja fazer? \n";
		cout << " Opcao 1: Cadastro de M�dicos.\n";
		cout << " Opcao 2: Cadastro de Pacientes\n";
		cout << " Opcao 3: Agendamento de Consulta.\n";
		cout << " Opcao 4: Listar M�dicos.\n";
		cout << " Opcao 5: Listar Pacientes. \n";
		cout << " Opcao 6: Contabilidade. \n" ;
		cout << " Opcao 7: Listar agendamentos. \n" ;
		cout << " Opcao 8: Efetuar Relat�rio. \n";
		cout <<	" Opcao 9: Consultar Relatorios.\n";
		cout << " Opcao 10: Finalizar sistema. \n";
		
		cout << "\nInsira sua escolha: ";
		cin >> (opcao);
		
		
		switch (opcao){
			case 1:
				do {
					system ("cls");
		
					cout << "Cadastro de Medico selecionado. \n";
					cout << "***************\n";
					cout << "------------CADASTRO DE MEDICO-------------\n";
					cout << "***************\n";
					cout << "\n-- BEM VINDO A TELA DE CADASTRO DE MEDICO.-- \n";
			
					cout << "Informe o nome do medico: " << endl;
					fflush (stdin);
					setbuf (stdin, NULL);
					getline (cin, medico[posMedico].nomemed);
					
		
					cout << "Informe a especialidade do medico:" << endl;
					fflush (stdin);
					setbuf (stdin, NULL);
					getline (cin, medico[posMedico].espec);
					
		
					cout << "Informe o CRM:" << endl;
					fflush (stdin);
					setbuf (stdin, NULL);
					getline (cin, medico[posMedico].crm);
					
			
					cout << "Deseja concluir o cadastro?" << endl;
					cout << "Digite 1 para voltar ao menu principal e 0 para cadastrar outro medico:" << endl;
					fflush (stdin);
					cin >> (concluir);
					posMedico++;
					
					
					} while (concluir == 0);
					
					cout << "Cadastro concluido!\n" << endl;
						
					fim = 1;
					system ("cls");
					break;
		
				case 2:
					do {
					
					system ("cls");
					cout << "Cadastro de Pacientes selecionado." << endl;
					cout << "***************\n";
					cout << "------------CADASTRO DE PACIENTE-------------\n";
					cout << "***************\n";
					cout << "\n-- BEM VINDO A TELA DE CADASTRO DE PACIENTE.-- \n";
			
					cout << "Informe o nome do paciente: " << endl;
					fflush (stdin);
					getline (cin, paciente[posPaciente].nomepac);
					
					
					cout << "Informe o CPF do paciente:" << endl;
					//fflush (stdin);
					cin >> (paciente[posPaciente].cpf_pac);
					
					
					cout << "Informe a data de nascimento do paciente:" << endl;
					fflush (stdin);
					cin >> (paciente[posPaciente].datanasc_pac);
					
				
					cout << "Informe o CEP do paciente:" << endl;
					fflush (stdin);
					cin >> (paciente[posPaciente].cep_pac);
					
				
					cout << "Informe o sexo do paciente:" << endl;
					fflush (stdin);
					cin >> (paciente[posPaciente].sexopac);
					
					
					cout << "Informe o peso do paciente:" << endl;
					fflush (stdin);
					cin >> (paciente[posPaciente].peso_pac);
					
					
					cout << "Informe a altura do paciente:" << endl;
					fflush (stdin);
					cin >> (paciente[posPaciente].altura_pac);
				
					
					cout << "Deseja concluir o cadastro?" << endl;
					cout << "Digite 1 para voltar ao menu principal e 0 para cadastrar outro paciente:" << endl;
					fflush (stdin);
					cin >> (concluir);
					posPaciente++;
					system ("cls");
					
					
					cout << "Cadastro concluido!\n" << endl;
					}while (concluir ==0);
					fim = 1;
			
					system ("cls");
					break;
				
				case 3:
					system ("cls");
					cout << "Agendamento de Consultado selecionado." << endl;
					cout << "***************\n";
					cout << "------------AGENDAMENTO DE CONSULTA-------------\n";
					cout << "***************\n";
					cout << "\n-- BEM VINDO A TELA DE AGENDAMENTO DE CONSULTA.-- \n";
					
					cout << "Informe o CPF do paciente:" << endl;
					cin >> (buscar);

					if (buscar == paciente[i].cpf_pac)
					{
				    for (int i=0; i<TAM; i++)
				    {
				    
				     	cout << "PACIENTE ESTA CADASTRADO" << endl;
				     	
				     	cout << "Informe o nome do paciente: " << endl;
						fflush (stdin);
						getline (cin, agendamento[posAgendamento].nomepac);
					
					
						cout << "Informe o CPF do paciente:" << endl;
						fflush (stdin);
						cin >> (agendamento[posAgendamento].cpf_pac);
						
				    	cout << "Informe a data de agendamento:" << endl;
						fflush (stdin);
						cin >> (agendamento[posAgendamento].agend_pac);
						i = TAM;
				 }
				} else {
					cout << "Necessario cadastrar paciente."<< endl;
				}
					cout << "Digite 1 para voltar ao menu principal e 0 para finalizar o programa:" << endl;
				 cin >> (concluir);
				 if (concluir  == 0)
						return 0;
						fim=1;
						system ("cls");
		 	
					break;
	
				case 4:
					system ("cls");
					do{
					for(int i=0; i<TAM; i++){
					if(medico[i].crm == ""){
							i = TAM;
						}else{
						cout << "\n" <<"Medicos - " << i+1 << endl;
						cout << "* Nome:" << medico[i].nomemed << " *\n";
						cout << "* Especializacao:" << medico[i].espec << " *\n";
						cout << "* CRM:" << medico[i].crm << " *\n";
						}	
					}
					cout << "Digite 1 para voltar ao menu principal." << endl;
					cin >> (concluir);
				}while (concluir == 0);
						
					break;
				
				case 5:
					system ("cls");
					do{
					for(int i=0; i<TAM; i++){
					if(paciente[i].nomepac == ""){
							i = TAM;
						}else{	
						cout << "\n \n" <<"Paciente ID - " << i+1 << endl;
						cout << "* Nome:" << paciente[i].nomepac << " *\n";
						cout.precision(11);
						cout << "* CPF:" << paciente[i].cpf_pac << " *\n";
						cout << "* Nascimento:" << paciente[i].datanasc_pac << " *\n";
						cout << "* CEP:" << paciente[i].cep_pac << " *\n";
						cout << "* Sexo: " << paciente[i].sexopac << " *\n";
						cout << "* Peso:" << paciente[i].peso_pac << " *\n";
						cout << "* Altura:" << paciente[i].altura_pac << " *\n";
						}
					}
					cout << "Digite 1 para voltar ao menu principal:" << endl;
					cin >> (concluir);
					}while (concluir == 0);
					break;
					
				case 6:
					system("cls");
					do {
					cout << "Qual mes voce deseja ver o relatorio?"<<endl;
					cout << "1- Janeiro"<<endl;
					cout << "2- Fevereiro"<<endl;
					cout << "3- Marco"<<endl;
					cout << "4- Abril"<<endl;
					fflush (stdin);
					cout << "Sua escolha: ";
					cin >> (entrada);
					if (entrada > 4 || entrada < 0 ){
					cout << "Opcao invalida" << endl;
					}
					
					switch (entrada){
					case 1:
						do {
						system("cls");
						relatoriojaneiro = fopen("relatoriojaneiro.txt","r"); //wt gravacao ---  rt = leitura -------- a = append
						while (fgets(texto_jan, 20, relatoriojaneiro) != NULL)
						printf ("%s", texto_jan);
						fclose (relatoriojaneiro);
						cout << "Digite 1 para voltar ao menu principal."<< endl;
						cin >> concluir;
						} while (concluir == 0);
					break;
					
					case 2:
						do {
						system("cls");
						relatoriofevereiro = fopen("relatoriofevereiro.txt","r"); //wt gravacao ---  rt = leitura -------- a = append
						while (fgets(texto_fev, 20, relatoriofevereiro) != NULL)
						printf ("%s", texto_fev);				
						fclose (relatoriofevereiro);
						cout << "\nDigite 1 para voltar ao menu principal."<< endl;
						cin >> concluir;
						}while (concluir ==0);
					break;
					
					case 3:
						do {
						system("cls");
						relatoriomarco = fopen("relatoriomarco.txt","r"); //wt gravacao ---  rt = leitura -------- a = append
						while (fgets(texto_marc, 20, relatoriomarco) != NULL)
						printf ("%s", texto_marc);
						fclose (relatoriomarco);
						cout << "\nDigite 1 para voltar ao menu principal."<< endl;
						cin >> concluir;
						}while (concluir == 0);
					break;
					
					case 4:
						do {
						system("cls");
						relatorioabril = fopen("relatorioabril.txt","r"); //wt gravacao ---  rt = leitura -------- a = append
						while (fgets(texto_abr, 20, relatorioabril) != NULL)
						printf ("%s", texto_abr);
						fclose (relatorioabril);
						cout << "\nDigite 1 para voltar ao menu principal."<< endl;
						cin >> concluir;
						}while (concluir ==0);
					
					default:
						system("cls");
						cout << "Opcao invalida.\n";
						break;
						
				cout << "Digite 1 para voltar ao menu principal."<< endl;
				cin >> concluir;
				}
			} while (concluir == 0);
				break;
				
				default:
					cout << "Insira uma das opcoes acima. \n" << endl;
					break;	
					
					
				case 7:
					system ("cls");
					do{
					for(int i=0; i<TAM; i++){
					if(agendamento[i].nomepac == ""){
							i = TAM;
						}else{	
						cout << "\n \n" <<"Paciente - " << i+1 << endl;
						cout << "* Nome:" << agendamento[i].nomepac << " *\n";
						cout.precision(11);
						cout << "* CPF:" << agendamento[i].cpf_pac << " *\n";
						cout << "* Agendamento:" << agendamento[i].agend_pac << " *\n";
						}
					}
					cout << "Digite 1 para voltar ao menu principal:" << endl;
					cin >> (concluir);
					}while (concluir == 0);
					break;
					
					case 8:
					do {
					system ("cls");
					cout << "Tela de Relatorio." << endl;
					cout << "Digite o ID do paciente cadastrado para fazer o relatorio: " << endl;
					fflush (stdin);
					cin >> (relatorio[posRelatorio].id_paciente);
					cout << "Escreva o relatorio: " << endl;
					fflush (stdin);
					getline (cin, relatorio[posRelatorio].relat_paciente);
					cout << "Deseja concluir o relatorio?" << endl;
					cout << "Digite 1 para voltar ao menu principal e 0 para fazer outro relatorio." << endl;
					fflush (stdin);
					cin >> (concluir);
					cout << "Relatorio salvo.";
					system ("cls");
					posRelatorio++;
			}while (concluir == 0);
				fim = 1;
			break;
				
				case 9:
				system("cls");
				do {
				for(int i=0; i<TAM; i++){	
				if (relatorio[i].relat_paciente ==""){
					i = TAM;
				}else{
				cout << " \n Paciente ID - " << " " << relatorio[i].id_paciente << endl;
				cout << "Relatorio: " << " " << relatorio[i].relat_paciente << endl;
				}
			}
				cout << "\n \nDigite 1 para voltar ao menu principal." << endl;
				cin >> (concluir);
				}while (concluir == 0);
					
				break;
			
				case 10:
					cout << "Obrigado por utilizar nosso sistema!\n";
					return 0;
					system ("cls");
					break;
}
		} while ( fim = 1);
	return 0;
}else{
	cout << "Login ou senha invalido!";
}
}

