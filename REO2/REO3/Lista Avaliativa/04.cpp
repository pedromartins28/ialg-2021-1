#include <iostream>

using namespace std;

int main(){

    int N, i=0, j=1;

    cin >> N;

    int V[N];

    while(i<N){
        V[i] = 0;
        i++;
    }

    i=1;

    while(i<=N){
        while(j<=N){
            if(i<=j and j%i==0){
                V[j-1]++;
            }

            j++;
        }
        j=1;
        i++;
    }

    i=0;

    while(i<N){

        if(V[i]%2==1){
            cout << i+1 << " ";
        }

        i++;
    }
    

    
}