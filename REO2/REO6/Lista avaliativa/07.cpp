#include <iostream>
using namespace std;


struct funcionario{
	
	int ID;
	float horas;
	float valor;
	float salario;
	
};

void ordena(funcionario vetor[], int tam) {
	
	float aux, aux2;
    int i;

    for ( i = 0; i < tam-1; i++) {
		for (int j = 0; j < tam-1-i; j++){	
			if (vetor[j].salario > vetor[j+1].salario){	
				aux = vetor[j].salario;
				vetor[j].salario = vetor[j+1].salario;
				vetor[j+1].salario = aux;	
				
				aux2 = vetor[j].ID;
				vetor[j].ID = vetor[j+1].ID;
				vetor[j+1].ID = aux2;			
			}
		}
	}
	
	for (i = 0; i < tam; i++){
		
		cout << vetor[i].ID << " " << vetor[i].salario << endl; 
	}
	
	
}


void leitura(funcionario func[], int tam){
	
		for(int i=0; i<tam; i++){
			cin >> func[i].ID;
			cin >> func[i].horas;
			cin >> func[i].valor;
			func[i].salario = func[i].horas*func[i].valor;
		}		
	
}

int main(){
		
	int N;
	cin >> N;
	funcionario func[N];
	
	leitura(func, N);

	ordena(func, N);
	
	return 0;
}
