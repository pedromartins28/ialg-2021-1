#include <iostream>
using namespace std;

int main(){

    int N, aux, p, soma=0;
    cin >> N;
    int i, V[N], K;

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    cin >> K;

    for (i=1; i<N; i++){ 

        p = V[i]; 
        aux = i-1; 

        while ((aux >= 0) and (p > V[aux])){
            V[aux+1] = V[aux]; 
            aux--;
        }

        V[aux+1] = p;
        
    }

    for(i=0; i<K; i++){
        soma+=V[i];
    }

    cout << soma;

    return 0;

}