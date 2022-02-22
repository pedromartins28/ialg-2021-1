#include <iostream>

using namespace std;

int main(){

    int N, i=0, j=0;
    float Euler=0, fatorial=1;

    cin >> N;

    while(i<N){

        fatorial = 1;

        if(i!=0){

            while(j<=i){

                if(j!=0){

                    fatorial*=j;

                }

                j++;
            }

        }

        j=0;
    
        Euler+=(1/fatorial);


        i++;
    
    }

    cout << Euler;

    
}