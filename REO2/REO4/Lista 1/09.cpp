#include <iostream>
#include <iomanip>
using namespace std;


float a, b, c;

float calc(float a, float b, float c){
   
    a/=1.852;
    float previsao = 0.53995*c*b+a;

    
    cout << a << " " << previsao << endl;

}

int main(){


    while(a!= -1){

        cin >> a;

        if(a!=-1){
            cin >> b >> c;
            calc(a, b, c);
        }

        

    }
    

}