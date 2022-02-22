#include <iostream>
#include <string>
using namespace std;

struct alimentos{
    string prof;
    string nome[2];
    int qtd[2];
};

int main(){

    int N, i, j;
    cin >> N;

    alimentos alim[N];

    for(i=0; i<N; i++){
        cin >> alim[i].prof;
        for(j=0; j<2; j++){
            cin >> alim[i].nome[j];
            cin >> alim[i].qtd[j];
        }
    }

    

}