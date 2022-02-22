#include <iostream>

using namespace std;

int main(){

    int quantidadeIngressos, nmr, premiado=0, i=0;

    cin >> quantidadeIngressos;

    while(i<quantidadeIngressos){
        i++;
        cin >> nmr;
        if(premiado == 0 and i==nmr){
            premiado = i;
        }
    }

    cout << premiado;
    
}