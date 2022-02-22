#include <iostream>
using namespace std;


int busca(int K, int V[], int posinicial, int posfinal){

    int meio = (posinicial+posfinal)/2;

    if(V[meio] == K){
        cout << V[meio];
        return 0;
    }
    else if(posinicial<posfinal){
        if(V[meio] > K){
            cout << V[meio] << " ";
            posfinal = meio-1;
            busca(K, V, posinicial, posfinal);
        }
        else{
            cout <<V[meio] << " ";
            posinicial = meio+1;
            busca(K, V, posinicial, posfinal);
        }
    }
    else{
        cout << V[meio];
    }

    return 0;


}

int main(){
    int N, i;
    cin >> N;
    int V[N], K, posinicial = 0, posfinal = N-1;

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    cin >> K;

    busca(K, V, posinicial, posfinal);

    return 0;

}