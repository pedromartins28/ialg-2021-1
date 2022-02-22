#include <iostream>
using namespace std;

int main(){

    int M[5][5], i, j, aux, bingo=-1;

    for(i=0; i<5; i++){
        aux=0;
        for(j=0; j<5; j++){            
            cin >> M[i][j];
            if(M[i][j] == 1){
                aux++;
            }            
        }
        if(aux==5){
            bingo = 1;
        }
    }

    if(bingo == -1){

        for(i=0; i<5; i++){
            aux=0;
            for(j=0; j<5; j++){
                if(M[j][i] == 1){
                    aux++;
                } 
            }
            if(aux==5){
                bingo = 2;
                i=5;
            }
        }   

    }

    if(bingo == -1){
        aux=0;
        for(i=0; i<5; i++){
            if(M[i][i] == 1){
                aux++;
            }
        }
        if(aux==5){
            bingo = 3;
        }
    }

    if(bingo == -1){
        aux=0;
        j=5;
        for(i=0; i<5; i++){
            j--;
            if(M[i][j] == 1){
                aux++;
            }
        }
        if(aux==5){
            bingo = 4;
        }
    }
    
    cout << bingo;

    return 0;


}