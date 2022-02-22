#include <iostream>
using namespace std;

int main(){

    int N, aux=1, ant=0, aux2=2, i;
    cin >> N;
    bool verifica = true;

    while(verifica){

        if(N <= aux){
            for(i=ant+1; i<aux; i++){
                cout << i <<"--";
            }
            cout << aux;
            verifica = false;
        }
        else{
            ant=aux;
            aux+=aux2;
            aux2++;
        }

    }

    return 0;

}