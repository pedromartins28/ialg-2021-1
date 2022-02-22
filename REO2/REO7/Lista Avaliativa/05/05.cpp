#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	
	int i=0, j, k, N, dados;
	string saida;
	ifstream arq("entrada.txt");
	ofstream arq2("saida.txt");
	
	arq >> N;;
	int V[N];
	
	if (arq) {
		
		while (arq >> dados){
			V[i] = dados;
			i++;
		}
		
		arq.close();
	}
	
	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(V[i] == V[j]){
				for(k=j; k<N; k++){
					V[k] = V[k+1];
				}
				N--;
				i=0;
			}
		}
	}
	
	for(i=0; i<N; i++){		
		arq2 << V[i] << " ";
	}
	
	arq2.close();
	
	ifstream arqq("saida.txt");
		
	while(arqq >> saida){
		cout << saida << " ";
	}
	
	arqq.close();

	return 0;
}
