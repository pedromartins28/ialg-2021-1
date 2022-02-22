#include <iostream>
#include <string>
using namespace std;


string capicua(int x){

    string result;
    int aux, y=0, z = x;

    while(x != 0){    

        aux = x % 10;
        y = y * 10 + aux;    
        x = x / 10;    

    }    

    if(z == y){
        result = "sim";
    }
    else{
        result = "nao";
    }
    

    return result;

}

int main(){

    int x;
    cin >> x;
    cout << capicua(x);

    return 0;

}