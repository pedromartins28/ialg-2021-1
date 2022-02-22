#include <iostream>
#include <string>
using namespace std;

int main(){

    string X;

    cin >> X;

    int i, tam = X.size(), result=0;

    for(i=0; i<tam; i++){
        if(X[i] == 'a' or X[i] == 'e' or X[i] == 'i' or X[i] == 'o'  or X[i] == 'u') {
            result++;
        }
    }

    cout << result;

    return 0;

}