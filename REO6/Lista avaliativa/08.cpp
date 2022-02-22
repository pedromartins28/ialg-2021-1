#include <iostream>
using namespace std;


void imprime(int vetor[], int tam, bool troca, int A, int B){
	
	int i;
	
	for(i=0; i<tam; i++){
		if((i == A or i == B)  and troca == false){
			cout << vetor[i] << " *" << "\t";
		}
		else if((i == A or i == B) and troca == true){
			cout << vetor[i] << " t" << "\t";
		}
		else{
			cout << vetor[i] << "\t";
		}
	}
	
	cout << endl;
	
	
}

void bubble(int vetor[], int tam) {
    int aux_troca;
    bool troca;

    for (int i = 0; i < tam-1; i++) {
		for (int j = 0; j < tam-1-i; j++){	
			if (vetor[j] > vetor[j+1]){	
				troca = true;
				imprime(vetor, tam, troca, j, j+1);	
				aux_troca = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux_troca;				
			}
			else{
				troca = false;
				imprime(vetor, tam, troca, j, j+1);	
			}
		}
	}
	
	imprime(vetor, tam, troca, -1, -1);
}



int main(){
	
	int i, N;
	cin >> N;
	int vet[N];
	
	for(i=0; i<N; i++){
			cin >> vet[i];		
	}
	
	bubble(vet, N);
	
	return 0;
	
}
