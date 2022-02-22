#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

struct cliente{
    string nome;
    float x;
    float y;
    float valor;
};

int main(){

    int N, NT, i, aux, p, p2;
    float yP, xP, soma=0;

    cin >> N >> xP >> yP >> NT;

    cliente cliente[NT];
    float dist[NT], valor[NT];

    for(i=0; i<NT; i++){
        cin >> cliente[i].nome;
        cin >> cliente[i].x;
        cin >> cliente[i].y;
        cin >> cliente[i].valor;
    }

    for(i=0; i<NT; i++){
        dist[i] = sqrt(pow(xP-cliente[i].x, 2) + pow(yP-cliente[i].y, 2));
        valor[i] = cliente[i].valor;
    }

    for (i=1; i<NT; i++){ 

        p = dist[i]; 
        p2 = valor[i];
        aux = i-1; 

        while ((aux>=0) and (p<dist[aux])){
            dist[aux+1] = dist[aux]; 
            valor[aux+1] = valor[aux];
            aux--;
        }

        dist[aux+1] = p;
        valor[aux+1] = p2;
        
    }

    for(i=0; i<N; i++){
        soma+=valor[i];
    }

    cout << soma;

    return 0;

}