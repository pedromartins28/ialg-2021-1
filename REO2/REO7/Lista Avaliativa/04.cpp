#include <iostream>

using namespace std;

void shellSort(float V[], int G[], int tam, int gap){

	float aux;
	int i, j, k, aux2;
	
	while(gap>=0) {

		aux2 = G[gap];
		
		for(i=aux2; i<tam; i++) {
			aux = V[i];
			j=i;
			
			cout << aux2 << ": ";

			for(k=0; k<tam; k++){
				cout << V[k];
				if(V[k]==aux){
					cout << "!";
				}
				 cout << "  ";

			}
			cout << endl;
			
			while((j>=aux2) and (V[j-aux2]>aux)){
				V[j]=V[j-aux2];
				j=j-aux2;
			}

			V[j]=aux;
			
			cout << "   ";

			for(k=0; k<tam; k++){
				cout << V[k] << "   ";
			}

			cout << endl;
		}
		gap--;
	}
}

int main(){
	
	int i, N, gapN;
	
	cin >> gapN;
	
	int G[gapN];
	
	for(i=0; i<gapN; i++) {
		cin >> G[i];
	}

	cin >> N;
	
	float V[N];
	
	for(i=0; i<N; i++) {
		cin >> V[i];
	}
	
	shellSort(V, G, N, gapN);

	return 0;
	
}


