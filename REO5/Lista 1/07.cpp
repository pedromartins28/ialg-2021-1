#include <iostream>
using namespace std;

int main(){
    int N, i, j, soma=0;
    cin >> N;
    int X[N][N];

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            cin >> X[i][j];
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(j>N-1-i and j>i){
                soma+= X[i][j];
            }
        }
    }

    cout << soma;

    return 0;

}