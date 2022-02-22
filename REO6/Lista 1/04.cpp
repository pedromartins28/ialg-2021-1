#include <iostream>

using namespace std;

void insertionSort(int V[], int tam) {
    int aux, i, j;

    for(i = 1; i<tam; i++) {

        aux = V[i];
        j = i;

        while(j > 0 && V[j-1]>aux) {
            V[j] = V[j-1];
            j--;
        }

        V[j] = aux;

        for(int i=0; i<tam; i++){
            cout << V[i] << " ";
        }

        cout << endl;

   }
}

int main(){

    int N;

    cin >> N;

    int V[N];

    for(int i=0; i<N; i++){
        cin >> V[i];
    }

    insertionSort(V, N);

    return 0;
}