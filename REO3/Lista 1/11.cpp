#include <iostream>
using namespace std;

int main(){

    int N, i=1, j=1;

    cin >> N;

    while(i<=N){
        j=1;
        while(j<=N){
            if(i%2==1){
                if(j%2==0){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
            }
            else{
                if(j%2==0){
                    cout << ".";
                }
                else{
                    cout << "#";
                }
            }
            j++;
        }

        cout << endl;
        i++;

    }
    
}