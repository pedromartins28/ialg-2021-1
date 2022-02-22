#include <iostream>

using namespace std;

int main(){

    int divisor, N;

    cin >> divisor;

    while(1){

        cin >> N;

        if(N%divisor==2){
            cout << N/divisor;
            break;
        }

    }



    
}