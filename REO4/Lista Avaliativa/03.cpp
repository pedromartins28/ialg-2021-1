#include <iostream>
using namespace std;

int maior=0, menor=9999;

int calc(int x){

    int i=0, aux=0;

    for(i=1; i<=x; i++){

        if(x%i==0){          
            aux++;
        }
    }

    if(aux>2){

        for(i=1; i<=x; i++){

            if(x%i==0){  

                cout << i << endl;  

                if(i>maior and i<x){
                    maior = i;
                }

                if(i<menor and i>1){
                    menor = i;
                }

            }           

        }

    }

    else if(aux==1){

        cout << "1" << endl;

        maior = x;
        menor = 1;

    }

    else{

        cout << "1" << endl << x << endl;

        maior = x;
        menor = 1;

    }

    return 0;

}

int main(){

    int x;
    cin >> x;

    calc(x);

    cout << menor << " " << maior;

    return 0;

}