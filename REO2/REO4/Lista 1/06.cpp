#include <iostream>
using namespace std;

int aux=0, i=0;

int mult(int a, int b){

    aux+=a;
    i++;

    if(a==0 or b==0){
        i = 1010101010;
        aux = 0;
    }
    
    if(i<b){
        mult(a, b);
    }

    return aux;

}

int main(){

    int x, y;

    cin >> x >> y;

    mult(x, y);

    cout << aux;

    return 0;

}