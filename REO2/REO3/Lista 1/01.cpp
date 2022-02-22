#include <iostream>
using namespace std;

int main(){

    int x, y, aux=0, result=0;

    cin >> x >> y;

    if(x>=y and y!=0){

        while(aux<x){

            if(aux+y<=x){

                aux+=y;
                result++;
            }
            else{
                break;
            }           
        
        }

    }

        cout << result;
    

}
