#include <iostream>
using namespace std;

int aux=0, aux2=0, i=0, fib=0;

int calc(int x, int y, int z){

    if(i==0 and i<x){
        fib = y;
        cout << fib << " ";
        i++;
        calc(x, y, z);
    }
    else if(i==1 and i<x){
        aux = y;
        aux2 = z;
        fib = z;
        cout << fib << " ";
        i++;
        calc(x, y, z);
    }
    else if(i>=2 and i<x){

        fib = aux + aux2;
        cout << fib << " ";
        aux = aux2;
        aux2 = fib;
        i++;
        calc(x, y, z);

    }

    return 0;

}



int main(){

    int x, y, z;

    cin >> y >> z >> x;

    calc(x, y, z);

    return 0;

}