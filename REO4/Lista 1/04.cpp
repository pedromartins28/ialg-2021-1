#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int aux=0, aux2=0, aux3=0, i=0, fib=0, vet[100];

int calc(int x){

    if(i==0 and i<x){
        fib = 1;
        vet[i] = fib;
        i++;
        calc(x);
    }
    else if(i==1 and i<x){
        fib = 1;
        vet[i] = fib;
        i++;
        calc(x);
    }
    else if(i==2 and i<x){
        aux = 0;
        aux2 = 1;
        aux3 = 1;
        fib = 2;
        vet[i] = fib;
        i++;
        calc(x);

    }

    else if(i>=3 and i<x){
        aux = aux2;
        aux2 = aux3;
        aux3 = fib;
        fib = aux + aux2 + aux3;
        vet[i] = fib;
        i++;
        calc(x);

    }

    return 0;

}



int main(){

    int x, j=0;

    cin >> x;

    calc(x);

    while(j<x){
        cout << vet[j] << " ";
        j++;
    }

    return 0;

}