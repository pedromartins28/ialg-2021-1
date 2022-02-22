#include <iostream>
using namespace std;

int aux=0, aux2=0, i=0, fib=0;

int calc(int x){

    if(i==0 and i<x){
        fib = 1;
        cout << fib << " ";
        i++;
        calc(x);
    }
    else if(i==1 and i<x){
        aux = 1;
        aux2 = 1;
        fib = 1;
        cout << fib << " ";
        i++;
        calc(x);
    }
    else if(i>=2 and i<x){

        fib = aux + aux2;
        cout << fib << " ";
        aux = aux2;
        aux2 = fib;
        i++;
        calc(x);

    }

    return 0;

}



int main(){

    int x;

    cin >> x;

    calc(x);

    return 0;

}