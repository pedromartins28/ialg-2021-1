#include <iostream>
using namespace std;

int main(){

    int x[10][10], i, j, maior=0, linha, minimax=999999, coluna;

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            cin >> x[i][j];
        }
    }

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(x[i][j] > maior){
                maior = x[i][j];
            }
        }
    }

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(x[i][j] == maior){
                linha = i;
                j = 10;
                i = 10;
            }
        }
    }

    for(i=0; i<10; i++){
        if(x[linha][i] < minimax){
            minimax = x[linha][i];
        }
    }

    for(i=0; i<10; i++){
        if(x[linha][i] == minimax){
            coluna = i;
            i=10;
        }
    }

   cout << minimax << endl << linha << " " << coluna;

   return 0; 


}