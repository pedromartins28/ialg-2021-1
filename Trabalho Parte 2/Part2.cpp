//Nome: Pedro Igor Ferreira Martins
//Número de matrícula: 202110239

//Nome: João Augusto Dias Neto
//Número de matrícula: 202110228

//Turma: 14A
//Tema do trabalho: Games


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

int menu(struct info dados[], int cont);

//funcao utilizada para cadastrar um novo registro na struct
//os cadastros estão ordenados pelo número identificador
void cadastro(struct info dados[], int cont){
	
	
	if(cont<100){//limita o numero de registros para 100
		
		int aux=cont+1;//guarda o valor do identificador referente ao registro	
		dados[cont].ID = aux;//passa o identificador para a struct 		
		
		
		cout << "Nome: ";
		cin.ignore();
		cin.getline(dados[cont].nome, 20);
		cout << endl << "Ano de lancamento: ";
		cin.getline(dados[cont].ano, 5);	
		cout << endl << "Plataforma: ";
		cin.getline(dados[cont].plataforma, 20);
		cout << endl << "Descricao: ";
		cin.getline(dados[cont].descricao, 50);
		
		cout << endl << "Cadastro efetuado com sucesso!" << endl << endl;
		cont++;
		pause();
		menu(dados, cont);
	}
	
	else{
		cout << "Nao e possivel adicionar mais itens!" << endl << endl;
		pause();
		menu(dados, cont);
	}
	
	
	
}

//funcao utilizada para listar todos os campos registrados na struct
void lista(struct info dados[], int cont){
	
	int i;
	cout << "----------------------" << endl;
	
	for(i=0; i<cont; i++){//lista todos os campos registrados
				
		
		cout << endl << "ID...............: " << dados[i].ID;
		cout << endl << "Nome.............: " << dados[i].nome;
		cout << endl << "Ano de lancamento: " << dados[i].ano;				
		cout << endl << "Plataforma.......: " << dados[i].plataforma;
		cout << endl << "Descricao........: " << dados[i].descricao;
		
		cout << endl << endl << "----------------------" << endl;
				
	}
	
	cout << endl;
	
	cin.ignore();
	pause();
	menu(dados, cont);
	
}

//funcao utilizada para pesquisar os dados de um game
void pesquisa(struct info dados[], int cont){
	
	int campo, i, posinicial = 0, posfinal = cont;//variável campo recebe qual campo o usuário deseja pesquisar
	bool encontrou = false, aux = true;//controle de existência e de estrutura de repetição, respectivamente
	cout << "1- ID" << endl;
	cout << "2- Nome" << endl << endl;
	cout << "Qual campo deseja pesquisar?: ";
	cin >> campo;	
	
	if(campo == 1){
		cout << endl << "Qual ID deseja pesquisar?: ";
		int busca;//caso o usuário escolha procurar por um ID, ele será armazenado nessa variável
		cin >> busca;
		
		while(aux){//realiza busca binaria
			int meio = (posinicial+posfinal)/2;
				
			if(dados[meio].ID==busca){//imprime os dados referente a busca
				
				clear();
				cout << endl << "ID...............: " << dados[meio].ID;
				cout << endl << "Nome.............: " << dados[meio].nome;
				cout << endl << "Ano de lancamento: " << dados[meio].ano;				
				cout << endl << "Plataforma.......: " << dados[meio].plataforma;
				cout << endl << "Descricao........: " << dados[meio].descricao << endl << endl;
				encontrou = true;
				aux = false;
					
			}
			
			//caso ainda reste posicoes, verifica para qual lado do vetor a busca irá
			else if(posinicial<posfinal){ 
					
				if(dados[meio].ID > busca){
					posfinal = meio-1;	
				}
				
				else{
					posinicial = meio+1;
				}
					
			}
				
			//encerra a  repetição	
			else{
				aux = false;
			}
		}
		cin.ignore();
	}
	
	else if(campo == 2){
		cout << endl << "Qual nome deseja pesquisar?: ";
		string busca; //caso o usuário escolha procurar por um nome, ele será armazenado nessa variável
		cin.ignore();
		getline(cin, busca);
		
		for(i=0; i<cont; i++){//imprime os dados referente a busca
					
			if(dados[i].nome==busca){
				
				clear();
				cout << endl << "ID...............: " << dados[i].ID;
				cout << endl << "Nome.............: " << dados[i].nome;
				cout << endl << "Ano de lancamento: " << dados[i].ano;				
				cout << endl << "Plataforma.......: " << dados[i].plataforma;
				cout << endl << "Descricao........: " << dados[i].descricao << endl << endl;
				encontrou = true;
					
			}
					
		}
	}
		
	
	//verifica em qual momento o usuario inseriu uma opcao invalida
	//caso tenha sido no primeiro momento é necessario o uso do cin.ignore	
	if((encontrou==false and campo == 1) or (encontrou==false and campo == 2)){
		cout << endl << "Registro nao encontrado!" << endl;
	}
	
	else if(encontrou==false){		
		cin.ignore();
		cout << endl << "Registro nao encontrado!" << endl;		
	}
	
	cout << endl;
	pause();	
	menu(dados, cont);
	
}

//função para alterar o valor de algum campo da struct
void altera(struct info dados[], int cont){
	
	int i, campo, aux;//variável campo recebe qual campo o usuário deseja modificar
	string busca;//guarda o nome do game que o usuário deseja modificar	
	bool encontrou = false;//criada para controlar se o campo desejado existe ou não		
	
	cout << "Qual o nome do Game que deseja alterar?: ";
	cin.ignore();
	getline(cin, busca);		
	
	for(i=0; i<cont; i++){//percorre todos os nomes registrados na struct até encontrar o game desejaddo
		
		if(dados[i].nome == busca){
			encontrou = true;
			aux = i;
			i=cont;
		}	
		
	}
	
	if(encontrou){//verifica se existe um registro com o nome igual a busca
		
		cout << endl << "1- Nome" << endl;
		cout << "2- Ano de Lancamento" << endl;
		cout << "3- Plataforma" << endl;
		cout << "4- Descricao" << endl;
		cout << endl << "Qual campo deseja alterar?: ";
		cin >> campo;
		
		if(campo>=1 and campo<=4){//verifica se o usuario digitou um campo existente
			
			cout << endl << "O que deseja colocar no lugar?: ";
			
		}		
		
		switch(campo){//recebe o valor referente ao campo que o usuario deseja alterar
			case 1:
				cin.ignore();
				cin.getline(dados[aux].nome, 20);
				break;
			case 2:
				cin.ignore();
				cin.getline(dados[aux].ano, 5);
				break;
			case 3:
				cin.ignore();
				cin.getline(dados[aux].plataforma, 20);
				break;
			case 4:
				cin.ignore();
				cin.getline(dados[aux].descricao, 50);
				break;
			default:
				cout << endl << "Registro nao encontrado!" << endl;
				cin.ignore();
				break;
		}
	
		if(campo>=1 and campo<=4){//verifica se o usuario digitou um campo existente
			
			cout << endl << "Alterado com sucesso! " << endl;
			
		}		
				
	}
			
	else{
		
		cout << endl << "Registro nao encontrado!" << endl;
		
	}		
	cout << endl;
	pause();	
	menu(dados, cont);
	
}

int grava(struct info dados[], int cont){
	
	int op;
	
	cout << endl << "1- Sim" << endl;
	cout << "2- Nao" << endl;
	cout << endl << "Voce deseja gravar seus dados na memoria?: ";
	cin >> op;
	
	if(op == 1){
		
		ofstream arquivo ("games.dat", ios::app);	
		arquivo.write((const char*) (dados), cont*sizeof(info));
		arquivo.close();
				
		cout << endl << "Dados arquivados com sucesso!";
					
			
	}
	else{
		
		cout << endl << "Dados não foram arquivados!" << endl;
		
		cout << endl;
		
	}	
	
	return 0;
					
}

//mostra o menu principal
int menu(struct info dados[], int cont){

    int opcao;//recebe o valor referente a opção desejada pelo usuário
    clear();
    cout << "-------------- Bem vindo! --------------" << endl << endl;
    cout << "1- Cadastrar um Novo Game" << endl;
    cout << "2- Listar Todos os Games" << endl;
    cout << "3- Pesquisar um Game" << endl;
    cout << "4- Alterar um Game" << endl;
    cout << "5- Sair" << endl << endl;

    cout << "O que deseja fazer?: ";
    cin >> opcao;
    clear();
    
    //chama a funcao requisitada pelo usuario
    if(opcao==1){
        cadastro(dados, cont);
    }
    else if(opcao==2){
        lista(dados, cont);
    }
    else if(opcao==3){
        pesquisa(dados, cont);
    }
    else if(opcao==4){
        altera(dados, cont);
    }
    else if(opcao==5){
        grava(dados, cont);
    }
    else{
		cout << "Opcao invalida! " << endl << endl;
		menu(dados, cont);
	}
    
    return 0;

}


//bloco principal
int main(){

    int cont=0;//guarda o numero de cadastros registrados

	struct info dados[100];//guarda todos os dados da struct

    menu(dados, cont);//chama o menu

    return 0;

}
