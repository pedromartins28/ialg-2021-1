#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    char aux;
    cin >> str;
    int tam = str.size(), i, j;

    for(i=0; i<tam; i++){
        if(str[i] == str[i+1]){
            aux = str[i];
            for(j=i+1; j<tam; j++){
                if(str[j] == aux){
                    str[j] = ' ';
                }
                else{
                    j=tam;
                }
            }
        }
    }
    
    for(i=0; i<tam; i++){
        if(str[i] != ' '){
            cout << str[i];
        }
    }

    return 0;

}