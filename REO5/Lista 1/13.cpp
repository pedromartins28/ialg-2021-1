#include <iostream>
using namespace std;

int main(){
    int N, i, aux=0;
    cin >> N;
    char V[N], C;

    for(i=0; i<N; i++){
        cin >> V[i];
    }

    cin >> C;

    for(i=0; i<N; i++){
        if(V[i] == C){
            aux++;
            cout << i << " ";
        }
    }

    if(aux==0){
        cout << "-1";
    }

    return 0;

}