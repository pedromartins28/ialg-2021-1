#include <iostream>
using namespace std;


void ordena(int V[], int pos){

    int posMenor, aux, i, j;

    for (i=0; i<pos-1; i++) {
        posMenor = i;
        for (j=i+1; j<pos; j++) {
            if (V[j] > V[posMenor])
                posMenor = j; 
        }
        aux = V[i];
        V[i] = V[posMenor];
        V[posMenor] = aux;
    }
}

int main(){

    int i, N, pos;
    cin >> N;
    int V[N];

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    cin >> pos;

    ordena(V, pos+1);

    for (int i=0; i<N; i++){
        cout << V[i] << " "; 
    }

    return 0;

}