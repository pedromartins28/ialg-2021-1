#include <iostream>
using namespace std;

int main (){

    int N, V[5], i=0, j=0, k=0, aux=0, aux2 = 0, cont=0;
    char R[100];

    while(i<256){

        cin >> N;
        cont+=N;

        if(N>0 and N<256){
            j=0;
            while(j<N){
                k=0;
                while(k<5){
                    
                    cin >> V[k];

                    if(V[k]<=127 and R[aux2]!='*'){

                        R[aux2] = k+65;
                        k++;
                        while(k<5){
                            cin >> V[k];

                            if(V[k]<=127 and R[aux2] != '*'){
                                R[aux2] = '*';
                                 
                            }

                            k++;
                            
                        }
                        
                    }
                

                    k++;
                    
                }

                if(R[aux2] != '*' and R[aux2] != 'A' and R[aux2] != 'B' and R[aux2] != 'C' and R[aux2] != 'D' and R[aux2] != 'E'){
                    R[aux2] = '*';
                }

                j++;
                aux2++;
        
            }

        }

        else{
            i=256;
        }



    }

    while(aux<cont){
        cout << R[aux] << endl;
        aux++;
    }

}