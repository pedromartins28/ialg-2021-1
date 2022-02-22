#include <iostream>
using namespace std;

int main(){
    int N, i, j, maior=0, aux;
    cin >> N;
    string str[N];
    
    for(i=0; i<N; i++){
        cin >> str[i];
        aux = str[i].size();
        if(aux > maior){
            maior = aux;
        }
    }

    for(i=0; i<N; i++){

        aux = maior - str[i].size();

        for(j=0; j<aux; j++){
            cout << '*';
        }

        cout << str[i] << endl;

    }

    return 0;


}
