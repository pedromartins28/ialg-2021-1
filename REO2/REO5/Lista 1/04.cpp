#include <iostream>
using namespace std;

int main(){
    int vet[10], i, k, n, p;

    for(i=0; i<10; i++){
        vet[i] = 0;
    }

    cin >> k;

    for(i=0; i<k; i++){
        cin >> vet[i];
    }

    cin >> n >> p;

    for(i=8; i>=p; i-=1){
        if(i>p){
            vet[i+1] = vet[i];
        }
        else{
            vet[i+1] = vet[i];
            vet[i] = n;
        }
    }

    cout << endl;

    for(i=0; i<10; i++){
        cout << vet[i] << " ";
    }

    return 0;

}