#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
	
	int i, aux;	
	string nome, dados;
	
	cin >> nome;
	
	ifstream arq(nome);	
	ofstream arq2("cifrado.txt");
	
	while(getline(arq, dados)){
		aux = dados.size();		
		for(i=0; i<aux; i++) {	
			if(dados[i]>64 and dados[i]<91) {								
				if(dados[i] > 25/2) {
					dados[i] = 65+90-dados[i];
				} 
				else {
					dados[i] = 90+dados[i]-65;
				}							
			}										
		}	
			
		arq2 << dados << endl;
	}
	
	arq.close();
	arq2.close();
	
	return 0;
	
}
