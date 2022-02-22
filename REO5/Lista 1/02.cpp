#include <iostream>
using namespace std;

int del(int V[], int N){

    int i, cont=0;

    for(i=0; i<N; i++){
        if(V[i]%3!=0){
            cout << V[i] << " ";
            cont++;
        }
        else{
            V[i] = -1;
        }
    }

    cout << endl << cont;

    return 0;

}

int main(){
    int N, i;
    cin >> N;
    int V[N];
    for(i=0; i<N; i++){
        cin >> V[i];
    }

    del(V, N);

    return 0;
}