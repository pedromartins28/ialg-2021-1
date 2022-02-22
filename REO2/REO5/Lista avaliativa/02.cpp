#include <iostream>
using namespace std;

int main(){
    int H[100], M[100], i, Ch, Cm, aux;
    float cont = 0, aux2;

    for(i=0; i<100; i++){
        cin >> H[i];
        if(H[i] >= 0){
            cin >> M[i];
            cont++;
        }
        else{
            i=100;
        }
    }


    aux = cont*0.7;

    cin >> Ch >> Cm;

    for(i=cont-1; i>=0; i--){
        if(H[i] <= Ch and M[i] <= Cm){
            aux2 = i;
            i=0;
        }
        else{
            aux2 = -1;
        }
    }

    for(i=0; i<cont; i++){
        if(i==aux){
            cout << H[i] << ":" << M[i] << endl;
            i=cont;
        }
    }

    if(aux2 >= 0){
        for(i=0; i<cont; i++){
            if(i==aux2){
                cout << (aux2+1)*100/cont;
                i=cont;
            }
        }
    }
    else{
        cout << "0";
    }

    return 0;
    
}