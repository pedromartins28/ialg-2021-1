#include <iostream>
using namespace std;

int main(){

    int N, x=0, y=0, z=0, i=0;

    while(i<7){

        i++;
        cin >> N;
        z+=N;

        if (N>x){
            y=x;
            x=N;
        }
        else{

            if(N>y){
                y=N;
            }
            
        }       

    }

    cout << x << endl << y << endl << (z-(x+y))/5;
    
}