#include <iostream>
using namespace std;

int main(){
    int A[2][3], B[3][2], C[2][2], i, j, k;

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            cin >> A[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            cin >> B[i][j];
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            C[i][j] = 0;
        }
    }


    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<3; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}