#include <iostream>
#include <string>
using namespace std;

int main(){

    string N;
    char aux, x;
    int i=0, j=0;
    
    cin >> N;
    
    while(i<10){
        x = N[i];
        if(x <= '9' and x >= '0'){
            i++;
        }
        else{
            break;
        }
    }

    aux = N[i-1];
    N[i-1] = N[0];
    N[0] = aux;

    while(j<i){
        cout << N[j];
        j++;
    }


    
}