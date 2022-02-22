#include <iostream>
using namespace std;

int main(){

    float M[4][4], total=0;
    int i, j, Q, aux;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            cin >> M[i][j];
        }
    }

    cin >> Q;

    int V[Q];

    cin >> V[0];

    aux = V[0];

    for(i=1; i<Q; i++){
        cin >> V[i];
        total+= M[aux][V[i]];
        aux=V[i];
    }

    cout << total;

    return 0;

}