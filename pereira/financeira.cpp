#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

//cria a struct e seus campos
struct info{
	
	bool ativo;
	char ID[20];
	char CPF[12];
	char nome[20];
	int nPix;
	float saldo;
	string pix[3];
	
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

	fstream arquivo ("banco.dat", ios::in|ios::ate);
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

	fstream arquivo ("banco.dat", ios::in|ios::ate);
	long int tam = arquivo.tellg();
	int i, cont=0;	
	info leitura;
	tam = int(tam/sizeof(info));

	for(i=0; i<tam; i++){
		arquivo.seekp(i*sizeof(info));				
		arquivo.read((char*) &leitura, sizeof(info));

		if(leitura.ativo==false){
			cont++;
		}

	}	

	return cont;
	
}

int menu(fstream& arquivo, struct info conta[], int cont);

void cadastrarPix(fstream& arquivo, struct info conta[], int cont){
	
	cout << endl << "Quantas chaves pix deseja cadastrar?: ";
	cin >> conta[cont].nPix;
	
	for(int i=0; i<conta[cont].nPix; i++){
		cout << "\nChave " << i+1 <<": ";
		cin >> conta[cont].pix[i];
	}
	cout << endl;
}

//funcao utilizada para cadastrar um novo registro na struct
//os cadastros estão ordenados pelo número identificador
void cadastro(fstream& arquivo, struct info conta[], int cont){
	
	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	//recebe o numero de registros deletados no arquivo 
	int del = numDeletados();

	//limita o numero de registros para 100
	if((num+cont-del)<100){		

		conta[cont].ativo = true;
		
		cout << "Nome: ";
		cin.ignore();
		cin.getline(conta[cont].nome, 21);

		cout << endl << "CPF: ";
		cin.getline(conta[cont].CPF, 13);	

		cout << endl << "Numero da conta: ";
		cin.getline(conta[cont].ID, 21);

		cout << endl << "Saldo inicial: ";
		cin >> conta[cont].saldo;	
		
		cadastrarPix(arquivo, conta, cont);
		
		cout << "Cadastro efetuado com sucesso!" << endl << endl;
		cont++;		
	}	
	else{
		cout << "Nao e possivel adicionar mais itens!" << endl << endl;
	}
	
	cout << conta[cont].nome << endl;
	cin.ignore();
	pause();
	menu(arquivo, conta, cont);
	
}

//funcao utilizada para listar todos os registros cadastrados
void lista(fstream& arquivo, struct info conta[], int cont){
	
	int i;
	info leitura;

	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	cout << "----------------------" << endl;	
		
	//lista todos os campos registrados no arquivo	
	for(i=0; i<num; i++){	
		arquivo.seekp(i*sizeof(info));				
		arquivo.read((char*) &leitura, sizeof(info));

		if(leitura.ativo==true){
			cout << endl << "Numero da conta..: " << leitura.ID;
			cout << endl << "Nome.............: " << leitura.nome;
			cout << endl << "CPF..............: " << leitura.CPF;				
			cout << endl << "Saldo............: " << leitura.saldo;
			for(int j=0; j<leitura.nPix; j++){
				cout << endl << "Chave pix........: " << leitura.pix[j];
			}
			cout << endl << endl << "----------------------" << endl;	
		}	

	}	

	//lista todos os campos registrados que não estão salvos no arquivo
	for(i=0; i<cont; i++){		
		cout << endl << "  Conta nao salva*  "<< endl;			
		cout << endl << "Numero da conta..: " << conta[i].ID;
		cout << endl << "Nome.............: " << conta[i].nome;
		cout << endl << "CPF..............: " << conta[i].CPF;				
		cout << endl << "Saldo............: " << conta[i].saldo;
		for(int j=0; j<conta[i].nPix;j++){
				cout << endl << "Chave pix........: " << conta[i].pix[j];
			}		
		cout << endl << endl << "----------------------" << endl;				
	}

	cout << endl;

	cin.ignore();//referente a função pause()
	pause();
	menu(arquivo, conta, cont);
	
}

//funcao utilizada para pesquisar um reegistro salvo
int pesquisa(fstream& arquivo, struct info conta[], int cont){
	
	int i, aux;
	info leitura;
	char busca[20];

	//recebe o numero de registros salvos no arquivo 
	int num = numRegistros();

	//verifica se o dado pesquisado existe
	bool encontrou = false;		
	
	cout << endl << "Qual o numero da conta?: ";	
	cin.ignore();
	cin.getline(busca, 21);	

	clear();	

	//imprime os dados referente a busca
	for(i=0; i<num; i++){			
		arquivo.seekp(i*sizeof(info));				
		arquivo.read((char*) &leitura, sizeof(info));	

		//verifica se o nome buscado é igual a posicao do arquivo				
		if(strcmp(busca, leitura.ID)==0){			
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
void saldo(fstream& arquivo, struct info conta[], int cont){
	
	int pos;	

	//procura o nome do game a ser alterado
	pos = pesquisa(arquivo, conta, cont);	

	//verifica se existe um registro referente ao nome pesquisado
	if(pos!=-1){		
		fstream arquivo ("banco.dat", ios::in|ios::out);	
		info leitura;			
		arquivo.seekp(pos*sizeof(info));			
		arquivo.read((char*) &leitura, sizeof(info));

		cout << endl << "---------Saldo atual--------- " << endl;
		cout << endl << leitura.saldo;	
		cout << endl << "----------------------------- " << endl;	
	
	}	
	else{
		cout << endl << "Registro nao existe ou nao foi salvo!";
	}	

	cout << endl << endl;

	pause();
	menu(arquivo, conta, cont);

}

//função utilizada para salvar os registros no arquivo
void grava(fstream& arquivo, struct info conta[], int cont){	
	
	int op;	

	cout << endl << "1- Sim" << endl;
	cout << "2- Nao" << endl;
	cout << endl << "Voce deseja gravar seus dados na memoria?: ";
	cin >> op;	

	if(op == 1){		
		fstream arquivo ("banco.dat", ios::app|ios::out);	
		arquivo.write((const char *) (conta), cont*sizeof(info));	
		cout << endl << "Dados arquivados com sucesso!";	
		cont=0;							
	}
	else{		
		cout << endl << "Dados nao foram arquivados!";		
	}	

	cout << endl << endl;
	
	pause();
	menu(arquivo, conta, cont);
					
}

//função utilizada para excluir um registro do arquivo
void exclui(struct info conta[], int cont){
	
	fstream arquivo ("banco.dat", ios::in|ios::out);	
	info troca;
	int i, aux;

	//procura o nome do game a ser excluido
	int pos = pesquisa(arquivo, conta, cont);

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
		troca.ativo = false;
		arquivo.write((char*) (&troca), sizeof(info));	

		cout << endl << "Registro excluido com sucesso!";
	}
	else{
		cout << endl << "Registro nao existe ou nao foi salvo!";
	}
	cout << endl << endl;

	pause();
	menu(arquivo, conta, cont);
	
}

void saque(fstream& arquivo, struct info conta[], int cont){
	int pos = pesquisa(arquivo, conta, cont);
	
	if(pos!=-1){
		float saque;
		fstream arquivo ("banco.dat", ios::in|ios::out);	
		info leitura, novo;	
		arquivo.seekp(pos*sizeof(info));			
		arquivo.read((char*) &leitura, sizeof(info));
		
		cout << endl << endl << "Digite o valor do saque: ";
		cin >> saque;
		
		if(leitura.saldo-saque>=0){
			novo = leitura;
			novo.saldo = leitura.saldo-saque;
			
			arquivo.seekp(pos*sizeof(info));
			arquivo.write((char*) &novo, sizeof(info));
			
			cout << endl << "Saque efetuado com sucesso!";
		}else{
			cout << endl << "Saldo insuficiente!";
		}
	}else{
		cout << endl << "Registro nao existe ou nao foi salvo!";
	}
	
	cout << endl << endl;

	cin.ignore();
	pause();
	menu(arquivo, conta, cont);
	
}

void deposito(fstream& arquivo, struct info conta[], int cont){
	int pos = pesquisa(arquivo, conta, cont);
	
	if(pos!=-1){
		float deposito;
		fstream arquivo ("banco.dat", ios::in|ios::out);	
		info leitura, novo;	
		arquivo.seekp(pos*sizeof(info));			
		arquivo.read((char*) &leitura, sizeof(info));
		
		cout << endl << endl << "Digite o valor do depósito: ";
		cin >> deposito;
		
		novo = leitura;
		novo.saldo = leitura.saldo+deposito;
			
		arquivo.seekp(pos*sizeof(info));
		arquivo.write((char*) &novo, sizeof(info));
			
		cout << endl << "Depósito efetuado com sucesso!";
	}else{
		cout << endl << "Registro nao existe ou nao foi salvo!";
	}
	
	cout << endl << endl;

	cin.ignore();
	pause();
	menu(arquivo, conta, cont);
	
}

//mostra o menu principal
int menu(fstream& arquivo, struct info conta[], int cont){

	//recebe o valor referente a opção desejada pelo usuário
    int opcao;

    clear();

    cout << "-------------- Bem vindo! --------------" << endl << endl;
    cout << "1- Cadastrar uma conta" << endl;
    cout << "2- Consultar saldo" << endl;
    cout << "3- Listar dados cadastrados" << endl;
    cout << "4- Excluir uma conta" << endl;
    cout << "5- Sacar um valor" << endl;
    cout << "6- Depositar um valor" << endl;
    cout << "7- Gravar dados em arquivo" << endl;
    cout << "8- Sair" << endl << endl;
    cout << "O que deseja fazer?: ";

    cin >> opcao;
    clear();    

	//chama a funcao requisitada pelo usuario
    switch(opcao){ 
		case 1:
			cadastro(arquivo, conta, cont);
			break;

		case 2:
			saldo(arquivo, conta, cont);
			break;

		case 3:
			lista(arquivo, conta, cont);
			break;

		case 4:
			exclui(conta, cont);
			break;

		case 5:
			saque(arquivo, conta, cont);
			break;

		case 6:
			deposito(arquivo, conta, cont);
			break;
			
		case 7: 
			grava(arquivo, conta, cont);
			break;
			
		case 8:
			return 0;
			break;
			
		default:
			cout << "Opcao invalida! " << endl << endl;

			menu(arquivo, conta, cont);
			break;
	}
	return 0;
	
}

//bloco principal
int main(){
	
	//abre o arquivo de games
	fstream arquivo ("banco.dat", ios::in|ios::out|ios::app|ios::ate);
	
	//guarda o numero de cadastros registrados e não salvos
    int cont=0;	

	//guarda todos os dados da struct
	struct info conta[100];

	//chama o menu
	menu(arquivo, conta, cont);	

	//fecha o arquivo
	arquivo.close();	

    return 0;
    
}
