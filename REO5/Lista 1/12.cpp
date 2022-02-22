#include <iostream>
using namespace std;


int busca(int K, int V[], int posinicial, int posfinal, int cont){

    int meio = (posinicial+posfinal)/2;

    cont = cont + 1;

    if(V[meio] == K){
        cout << meio << endl << cont;
        return 0;
    }
    else if(posinicial<posfinal){
        if(V[meio] > K){
            posfinal = meio-1;
            busca(K, V, posinicial, posfinal, cont);
        }
        else{
            posinicial = meio+1;
            busca(K, V, posinicial, posfinal, cont);
        }
    }
    else{
        cout << "-1" << endl << cont;
    }


    return 0;


}

int main(){
    int N, i, aux;
    cin >> N;
    int V[N], K, posinicial = 0, posfinal = N-1, cont=0;

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    for(i=0; i<N-1; i++){
        if(V[i]>V[i+1]){
            aux = V[i];
            V[i] = V[i+1];
            V[i+1] = aux;
            i=0;
        }
    }

    for(i=0; i<N; i++){
        cout <<  V[i] << " ";
    }

    cout << endl;

    cin >> K;

    busca(K, V, posinicial, posfinal, cont);

    return 0;

}