#include <iostream>

using namespace std;

int main(){

    int N, i=0, j=0;

    cin >> N;

    while(i<=N){

        while(j<i){

            if(j%2==0){
                cout << "@";
            }
            else{
                cout << "#";
            }
            j++;

        }

        cout << endl;

        i++;
        j=0;

    }

    
}