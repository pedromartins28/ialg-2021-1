#include <iostream>
using namespace std;

int main(){

    int l, c, i, j;
    cin >> l >> c;
    int M[l][c];

    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            cin >> M[i][j];
        }
    }

    for(i=0; i<l; i++){
        if(i%2==0){
            for(j=c-1; j>=0; j--){
                cout << M[i][j] << " ";              
            } 
        }

        else{
            for(j=0; j<c; j++){
                cout << M[i][j] << " ";              
            } 
        }
        
    }

    return 0;

}