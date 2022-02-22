#include <iostream>
using namespace std;

int read(int vetor[], int tam){

    int i;

    cout << "[";

    if(tam>0){

        for(i=0; i<tam; i++){

            if(i+1 == tam){
                cout << vetor[i] << "]";
            }
            else{
                cout << vetor[i] << ", ";
            }

        }

    }

    else{
        cout << "]";
    }

    

    return 0;

}

int main(){

    int tam, i;

    cin >> tam;

    int vetor[tam];

    for(i=0; i<tam; i++){

        cin >> vetor[i];

    }

    read(vetor, tam);
    cout << endl;

    return 0;

}