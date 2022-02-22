#include <iostream>

using namespace std;

int ordena(int V[], int N, int i){

    int aux, index, j;
    aux = V[i];
    index = i;
    for(j=i+1; j<5; j++){
        if(V[j] > aux){
            aux = V[j];
            index = j;
        }
    }

    return index;
}

int main(){

    int i, N, index, t;

    cin >> N;

    int V[N];

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    for(i=0; i<N; i++){
        index = ordena(V, 5, i);
        t = V[i];
        V[i] = V[index];
        V[index] = t;
    }

    for(i=0; i<N; i++){
        cout << V[i] << " ";
    }

    return 0;
}