#include <iostream>

using namespace std;

int main(){

    int N=1;
    float soma=0, aux=0, pos=0, neg=0;

    while (N!=0){

        cin >> N;
        soma+=N;

        if(N>0){
            pos++;
            aux++;
        }
        else if(N<0){
            neg++;
            aux++;
        }
        
    }

    float media = soma/aux, percPos=pos/(pos+neg), percNeg=neg/(pos+neg);

    cout << media << endl << pos << endl << neg << endl << percPos << endl << percNeg;

    
}