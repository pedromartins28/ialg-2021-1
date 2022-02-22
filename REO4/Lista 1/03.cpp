#include <iostream>
using namespace std;

int fatorial(int x){
    
    int i=1, fat=1;

    if(x%2==0){

        while(i<=x){

            if(i%2==0){
                fat*=i;
            }

            i++;
        
        }

    }

    else{

        while(i<=x){

            if(i%2==1){
                fat*=i;
            }

            i++;
        
        }
            
    }

    return fat;
    
}

int main(){

    int N;

    cin >> N;

    cout << fatorial(N);

    return 0;


}