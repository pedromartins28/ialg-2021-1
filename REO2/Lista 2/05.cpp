#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float saldo;
    cin >> saldo;
    cout << fixed << setprecision(2);


    if(saldo > 0 and saldo <=200){

        cout << saldo << "\n"; 
        cout << saldo*0.1;

    }
    else if(saldo > 200 and saldo <=400){
        
        cout << saldo;
        cout << saldo*0.15;

    }
    else if(saldo > 400 and saldo <=800){

        cout << saldo << "\n";
        cout << saldo*0.2;
        
    }
    
    else if(saldo > 800 and saldo <=1600){
        
        cout << saldo << "\n";
        cout << saldo*0.25;
        
    }
    else if(saldo > 1600){

        cout << saldo << "\n";
        cout << saldo*0.3;
        
    }
    
}