
//Nome: João Augusto Dias Neto
//Número de matrícula: 202110228

//Nome: Pedro Igor Ferreira Martins
//Número de matrícula: 202110239

//Turma: 14A
//Tema do trabalho: GAMES

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

//cria a struct e seus campos
struct info{
	
	int ID;
	char nome[20];
	char ano[5];
	char plataforma[20];
	char descricao[50];
	
};


//limpa o terminal
void clear() {
	
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    
}

//pausa o programa
void pause() {
	
	//o programa pede um valor para a variavel pause para que o programa seja pausado	
	string pause;

	cout << "Pressione Enter para continuar!";
	getline(cin, pause);
	
}

//retorna o numero de registros que estão salvos no arquivo;
int numRegistros(){

	fstream arquivo ("games.dat", ios::in|ios::ate);
	long int tam = arquivo.tellg();	

	//verifica se existem registros no arquivo
	if(tam>0){		
		return int(tam/sizeof(info));
	}
	else{
		return 0;
	}	
	
}

//retorna o numero de registros que estão deletados(ID=0) no arquivo;
int numDeletados(){

	fstream arquivo ("games.dat", ios::in|ios::ate);
	long int tam = arquivo.tellg();
	int i, cont=0;	
	info leitura;
	tam = int(tam/sizeof(info));

	for(i=0; i<tam; i++){
		arquivo.seekp(i*sizeof(info));				
		arquivo.read((char*) &leitura, sizeof(info));

		if(leitura.ID==0){
			cont++;
		}

	}	

	return cont;
	
}

void menu(fstream& arquivo, struct info dados[], int cont);

//funcao utilizada para cadastrar um novo registro na struct
//os cadastros estão ordenados pelo número identificador
void cadastro(fstream& arquivo, struct info dados[], int cont){
	
	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	//recebe o numero de registros deletados no arquivo 
	int del = numDeletados();

	//limita o numero de registros para 100
	if((num+cont-del)<100){		

		//passa o identificador para a struct 
		dados[cont].ID = cont+num+1;	

		cout << "Nome: ";
		cin.ignore();
		cin.getline(dados[cont].nome, 21);

		cout << endl << "Ano de lancamento: ";
		cin.getline(dados[cont].ano, 5);	

		cout << endl << "Plataforma: ";
		cin.getline(dados[cont].plataforma, 21);

		cout << endl << "Descricao: ";
		cin.getline(dados[cont].descricao, 51);	

		cout << endl << "Cadastro efetuado com sucesso!" << endl << endl;
		cont++;		
	}	
	else{
		cout << "Nao e possivel adicionar mais itens!" << endl << endl;
	}

	pause();
	menu(arquivo, dados, cont);
	
}

//funcao utilizada para listar todos os registros cadastrados
void lista(fstream& arquivo, struct info dados[], int cont){
	
	int i;
	info leitura;

	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	cout << "----------------------" << endl;	
		
	//lista todos os campos registrados no arquivo	
	for(i=0; i<num; i++){	
		arquivo.seekp(i*sizeof(info));				
		arquivo.read((char*) &leitura, sizeof(info));

		if(leitura.ID!=0){
			cout << endl << "ID...............: " << leitura.ID;
			cout << endl << "Nome.............: " << leitura.nome;
			cout << endl << "Ano de lancamento: " << leitura.ano;				
			cout << endl << "Plataforma.......: " << leitura.plataforma;
			cout << endl << "Descricao........: " << leitura.descricao;		
			cout << endl << endl << "----------------------" << endl;	
		}	

	}	

	//lista todos os campos registrados que não estão salvos no arquivo
	for(i=0; i<cont; i++){		
		cout << endl << "  Game nao salvo*  "<< endl;			
		cout << endl << "ID...............: " << dados[i].ID;
		cout << endl << "Nome.............: " << dados[i].nome;
		cout << endl << "Ano de lancamento: " << dados[i].ano;				
		cout << endl << "Plataforma.......: " << dados[i].plataforma;
		cout << endl << "Descricao........: " << dados[i].descricao;		
		cout << endl << endl << "----------------------" << endl;				
	}

	cout << endl;

	cin.ignore();//referente a função pause()
	pause();
	menu(arquivo, dados, cont);
	
}

//funcao utilizada para pesquisar um reegistro salvo
int pesquisa(fstream& arquivo, struct info dados[], int cont){
	
	int i, aux;
	info leitura;
	char busca[20];

	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	//verifica se o dados pesquisado existe
	bool encontrou = false;		
	
	cout << endl << "Qual o nome do Game?: ";	
	cin.ignore();
	cin.getline(busca, 21);	

	clear();	

	//imprime os dados referente a busca
	for(i=0; i<num; i++){			
		arquivo.seekp(i*sizeof(info));				
		arquivo.read((char*) &leitura, sizeof(info));	

		//verifica se o nome buscado é igual a posicao do arquivo				
		if(strcmp(busca, leitura.nome)==0 and leitura.ID!=0){			
			encontrou=true;
			aux = i;
			i = num;												
		}		

	}	

	if(encontrou){
		return aux;
	}		
	else{
		return -1;	
	}	
	
}

//função utilizada para alterar um registro salvo
void altera(fstream& arquivo, struct info dados[], int cont){
	
	int pos;	

	//procura o nome do game a ser alterado
	pos = pesquisa(arquivo, dados, cont);	

	//verifica se existe um registro referente ao nome pesquisado
	if(pos!=-1){		
		fstream arquivo ("games.dat", ios::in|ios::out);	
		info leitura, novo;			
		arquivo.seekp(pos*sizeof(info));			
		arquivo.read((char*) &leitura, sizeof(info));

		cout << endl << "---------Dados antigos--------- " << endl;
		cout << endl << "ID...............: " << leitura.ID;		
		cout << endl << "Nome.............: " << leitura.nome;
		cout << endl << "Ano de lancamento: " << leitura.ano;				
		cout << endl << "Plataforma.......: " << leitura.plataforma;
		cout << endl << "Descricao........: " << leitura.descricao;	

		cout << endl << endl << "Digite os novos valores: " << endl << endl;

		novo.ID = leitura.ID;

		cout << "Nome: ";
		cin.getline(novo.nome, 21);

		cout << endl << "Ano de lancamento: ";
		cin.getline(novo.ano, 5);	

		cout << endl << "Plataforma: ";
		cin.getline(novo.plataforma, 21);

		cout << endl << "Descricao: ";
		cin.getline(novo.descricao, 51);

		arquivo.seekp(pos*sizeof(info));
		arquivo.write((char*) &novo, sizeof(info));		

		cout << endl << "Alterado com sucesso!";			
	}	
	else{
		cout << endl << "Registro nao existe ou nao foi salvo!";
	}	

	cout << endl << endl;

	pause();
	menu(arquivo, dados, cont);

}

//função utilizada para salvar os registros no arquivo
int grava(fstream& arquivo, struct info dados[], int cont){	
	
	int op;	

	cout << endl << "1- Sim" << endl;
	cout << "2- Nao" << endl;
	cout << endl << "Voce deseja gravar seus dados na memoria?: ";
	cin >> op;	

	if(op == 1){		
		fstream arquivo ("games.dat", ios::app|ios::out);	
		arquivo.write((const char *) (dados), cont*sizeof(info));	

		cout << endl << "Dados arquivados com sucesso!";								
	}
	else{		
		cout << endl << "Dados nao foram arquivados!";		
	}	

	cout << endl;

	return 0;
					
}

//função utilizada para excluir um registro do arquivo
void exclui(struct info dados[], int cont){
	
	fstream arquivo ("games.dat", ios::in|ios::out);	
	info troca;
	int i, aux;

	//procura o nome do game a ser excluido
	int pos = pesquisa(arquivo, dados, cont);

	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	//verifica se existe um registro referente ao nome pesquisado
	if(pos!=-1){

		//joga o registro para a ultima posição
		for(i=pos+1; i<num; i++){
			arquivo.seekp((i)*sizeof(info));
			arquivo.read((char*) (&troca), sizeof(info));
			arquivo.seekp((i-1)*sizeof(info));
			arquivo.write((char*) (&troca), sizeof(info));											
		}	

		//seta o ID do registro para 0
		aux = num-1;
		arquivo.seekp((aux)*sizeof(info));
		troca.ID = 0;
		arquivo.write((char*) (&troca), sizeof(info));	

		cout << endl << "Registro excluido com sucesso!";
	}
	else{
		cout << endl << "Registro nao existe ou nao foi salvo!";
	}
	cout << endl << endl;

	pause();
	menu(arquivo, dados, cont);
	
}

//mostra o menu principal
void menu(fstream& arquivo, struct info dados[], int cont){

	//recebe o valor referente a opção desejada pelo usuário
    int opcao;

    clear();

    cout << "-------------- Bem vindo! --------------" << endl << endl;
    cout << "1- Cadastrar um Novo Game" << endl;
    cout << "2- Listar Todos os Games" << endl;
    cout << "3- Pesquisar um Game" << endl;
    cout << "4- Alterar um Game" << endl;
    cout << "5- Excluir um Game" << endl;
    cout << "6- Sair" << endl << endl;
    cout << "O que deseja fazer?: ";

    cin >> opcao;
    clear();    

	//chama a funcao requisitada pelo usuario
    switch(opcao){ 
		case 1:
			cadastro(arquivo, dados, cont);
			break;

		case 2:
			lista(arquivo, dados, cont);

			break;

		case 3:
			int aux;		
			aux = pesquisa(arquivo, dados, cont);

			//verifica se existe um registro referente ao nome pesquisado
			if(aux!=-1){				
				fstream arquivo ("games.dat", ios::in);	
				info leitura;			
				arquivo.seekp(aux*sizeof(info));				
				arquivo.read((char*) &leitura, sizeof(info));	

				cout << "----------------------" << endl;				
				cout << endl << "ID...............: " << leitura.ID;
				cout << endl << "Nome.............: " << leitura.nome;
				cout << endl << "Ano de lancamento: " << leitura.ano;				
				cout << endl << "Plataforma.......: " << leitura.plataforma;
				cout << endl << "Descricao........: " << leitura.descricao << endl << endl;			
			}
			else{
				cout << endl << "Registro nao existe ou nao foi salvo!" << endl << endl;
			}	

			pause();
			menu(arquivo, dados, cont);

			break;

		case 4:
			altera(arquivo, dados, cont);

			break;

		case 5:
			exclui(dados, cont);

			break;

		case 6:
			grava(arquivo, dados, cont);

			break;

		default:
			cout << "Opcao invalida! " << endl << endl;

			menu(arquivo, dados, cont);

			break;
	}
	
}

//bloco principal
int main(){
	
	//abre o arquivo de games
	fstream arquivo ("games.dat", ios::in|ios::out|ios::app|ios::ate);
	
	//guarda o numero de cadastros registrados e não salvos
    int cont=0;	

	//guarda todos os dados da struct
	struct info dados[100];

	//chama o menu
	menu(arquivo, dados, cont);	

	//fecha o arquivo
	arquivo.close();	

    return 0;

}
