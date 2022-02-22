#include <iostream>

using namespace std;

int main(){

    int x, y;
    
    cin >> x;
    cin >> y;

    if(y!=0){

        cout << x/y;
        cout << "\n";
        cout << x%y;

    }

    if (y==0){
        
        cout << "erro";

    }

}