#include <iostream>
#include <fstream>

using namespace std;

struct dados{
    char nome[20];
    char partido[30];
    float valor;
};

void intercala(struct dados pessoa[], int inicio, int meio, int fim){
	int i = inicio; 
    	int j = meio + 1;
    	int tamanho = fim - inicio + 1;
    	dados vetorAux[tamanho];
    	for(int k = 0; k < tamanho; k++){
        		if(i <= meio and j <= fim){
            		if(pessoa[i].valor >= pessoa[j].valor){
                			vetorAux[k] = pessoa[i];
                			i++;
            		} else {
                			vetorAux[k] = pessoa[j];
                			j++;
            		}
        		} else if(i > meio){
            		vetorAux[k] = pessoa[j];
            		j++;
        		} else {
            		vetorAux[k] = pessoa[i];
            		i++;
        		}
    	}
    	for(int m = 0; m < tamanho; m++){
        		pessoa[m + inicio] = vetorAux[m];
    	}
}

void ordena(struct dados pessoa[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio+fim)/2;
        ordena(pessoa, inicio, meio);
        ordena(pessoa, meio+1, fim);
        intercala(pessoa, inicio, meio, fim);
    }
}

void printa(int tam){

    int i;
	
    fstream arquivo("relacao_corruptos.txt");
    
    string leitura;

    for(i=0; i<tam; i++){
        arquivo >> leitura;
        cout << leitura << endl;
    }
    
}

int main(){
    int N, i, aux;
    cin >> N;
    aux = N-1;
    dados pessoa[N];

    ofstream arquivo ("relacao_corruptos.txt");

    for(i=0; i<N; i++){
        cin >> pessoa[i].nome >> pessoa[i].partido >> pessoa[i].valor;
    }

    ordena(pessoa, 0, aux);

    for(i=0; i<N; i++){
        arquivo << pessoa[i].nome << endl;
    }

    arquivo.close();

    printa(N);

    return 0;
}