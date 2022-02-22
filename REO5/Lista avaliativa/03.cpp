#include <iostream>
using namespace std;

int menor(int V[], int N){

    if(N==1){
        return V[0];
    }

    else{
        int M = menor(V, N-1);

        if(M < V[N-1]){
            return M;        
        }

        else{
            return V[N-1];
        }
    }

}


int indice(int V[], int N){

    if(N==1){
        return 0;
    }

    else{
        int I = indice(V, N-1);

        if(V[I] < V[N-1]){
            return I;        
        }

        else{
            return N-1;            
        }
    }

}



int main(){

    int N, i;
    cin >> N;
    int V[N];

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    cout << menor(V, N) << " " << indice(V, N);

    return 0;




    for(i=0; i<m; i++){
        vet3[i] =  vet1[i];
    }

    aux = m;

    for(i=0; i<n; i++){
        vet3[m] =  vet2[i];
        m++;
    }
}






