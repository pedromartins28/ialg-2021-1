#include <iostream>

using namespace std;

int main(){

    int x, y, aux=1, maior, menor, mmc;

    cin >> x >> y;

    if(x>y){

        maior = x;
        menor = y;

    }
    else if(y>x){

        maior = y;
        menor = x;

    }
    else{
        mmc = x;
        aux = 0;
    }

    while(aux!=0){

        aux = maior%menor;
        maior = menor;
        menor = aux;
        
        if(aux == 0){
            mmc = (x*y) / maior;
        }

    }

    cout << mmc;



    
}