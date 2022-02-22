#include <iostream>
using namespace std;

int main(){

    int N, i=1, X=1, Y=0, Z=1;

    cin >> N;

    while(i<=N){
        if(i==1){
            cout << "0" << endl;
        }
        else if(i==2){
            cout << "1" << endl;
        }
        else{
            X = Y + Z;
            Y = Z;
            Z = X;
            cout << X << endl;
        }
        i++;
    }
    
}