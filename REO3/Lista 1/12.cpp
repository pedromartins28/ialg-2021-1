#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int N, i=0;
    double PI=sqrt(2)/2, aux=sqrt(2)/2;

    cin >> N;

    while(i<N){

        cout << aux << "   " << PI << endl; 

        aux = sqrt(2+aux);
        PI*=aux;
        i++;

    }

    cout << 2/PI;

     
}