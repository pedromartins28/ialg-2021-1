#include <iostream>

using namespace std;

int main(){

    float valor;

    cin >> valor;

    if(valor > 400){

        cout << valor *0.3;

    }

    if(valor > 300 and valor <= 400){
        
        cout << valor *0.25;

    }

    if(valor > 200 and valor <= 300){
        
        cout << valor *0.2;

    }

    if(valor <= 200){

        cout << valor *0.1;
        
    }

}