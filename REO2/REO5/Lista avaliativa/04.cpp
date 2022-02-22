#include <iostream>
using namespace std;

int main(){

    int valor[10], qtd[10], i, mais=0, maisV, maisP, total=0;
    for(i=0; i<10; i++){
        cin >> valor[i] >> qtd[i];
        total += (valor[i]*qtd[i]);
        if(qtd[i]>mais){
            mais = qtd[i];
            maisV = valor[i];
            maisP = i;
        }
    }

    for(i=0; i<10; i++){

        cout << qtd[i] << " " << valor[i] << " " << qtd[i]*valor[i] <<endl;

    }

    cout << total << " " << total*0.05+900 << endl << maisV << " " << maisP;


    return 0;


}