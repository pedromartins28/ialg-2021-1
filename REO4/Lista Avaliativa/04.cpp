#include <iostream>
using namespace std;

int rev(int x){

    int y=0, aux;

    while(x != 0){    

        aux = x % 10;
        y = y * 10 + aux;    
        x = x / 10;    

    } 


    return y;
}


int main(){

    int x;
    cin >> x;

    cout << rev(x);

    return 0;
}
