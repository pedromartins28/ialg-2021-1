#include <iostream>
using namespace std;

int main(){

    char X;
    int i=0, a=0, b=0;
    

    while(i<10){

        cin >> X;

        if(X == 'a'){
            a++;
        }
        else{
            b++;
        }
        i++;

    }

    if(a<b){
        cout << "1";
    }
    else{
        cout << "0";
    }

    
}