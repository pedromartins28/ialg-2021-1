#include <iostream>

using namespace std;

void quickSort(int v[], int esq, int dir) {
	int i, j, aux, pivo, maior=0, menor=1001;
	i = esq;
	j = dir;
	pivo = v[(esq+dir)/2];
	while (i <= j) {
		while (v[i] < pivo) {
			i++;
		}
		while (v[j] > pivo) {
			j--;
		}
		if (i <= j) {
			if (v[i] >= maior) {
				maior = v[i];
			}
			if (v[j] <= menor) {
				menor = v[j];
			}
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	if (maior==menor) {
		cout  << "-1 -1" <<  endl;
	}
	else {
		cout << maior << " " << menor << endl;
	}
	
	if (esq < j) {
		quickSort(v, esq, j);
	}
	if (i < dir) {
		quickSort(v, i, dir);
	}
}

int main(){

	int i, N;
	cin >> N;
	int vet[N];

	for(i=0; i<N; i++){
		cin >> vet[i];
	}

	quickSort(vet, 0, N-1);

	return 0;
}