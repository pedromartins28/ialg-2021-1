#include <iostream>
#include <string>
using namespace std;

int main(){

    string X, Y;
    int i, j, result;
    cin >> X >> Y;
    int aux = Y.size();

    for(i=0; i<254; i++){
        
        if(X[i] == Y[0] and aux>1){
            for(j=1; j<aux; j++){
                if(X[i+j] == Y[j]){

                }
                else{
                    j = aux+1;
                }
                if(j+1 == aux){
                    result = i;
                    i=255;
                }
            }
        }
        else if(X[i] == Y[0] and aux==1){
            result = i;
            i=255;

        }

    }

    cout << result;
    


}

