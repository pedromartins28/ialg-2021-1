#include <iostream>
using namespace std;

int main(){

    char aux = 'a';
    int N, i=0, j=0;

    cin >> N;

    while(i<=N){
        j=0;
        aux = 'a';

        while(j<i){

            cout << aux << " ";
            aux++;
            j++;

        }
        cout << endl;
        i++;
    }
    
}