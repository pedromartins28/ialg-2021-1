#include <iostream>

using namespace std;

int main(){

    int N, i=1, soma=0;

    cin >> N;

    while(i<=N){
        if(N%i==0 and i!=N){
            cout << i << "+";
            soma+=i;
        }
        i++;
    }

    cout << N << "=" << soma+N;

    
}