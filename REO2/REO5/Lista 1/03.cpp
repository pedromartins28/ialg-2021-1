#include <iostream>
using namespace std;

int main(){

    int i, aux, aux2=9;
    char A[10], B[10];

    for(i=0; i<10; i++){
        cin >> A[i];
    }

    for(i=0; i<10; i++){
        cin >> B[i];
    }

    for(i=0; i<10; i++){

        if(i%2==0){
            aux = A[i];
            A[i] = B[aux2];
            B[aux2] = aux;
            aux2--;
        }
             
    }

    for(i=0; i<10; i++){
        cout << A[i] << " ";
    }

    cout << endl;

    for(i=0; i<10; i++){
        cout << B[i] << " ";
    }

    return 0;

}