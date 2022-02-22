#include <iostream>
using namespace std;

int F(int x);

int H(int x){

    int result;

    if(x==0){
        result = 0;
    }
    else{
        result = H(x-1) + F(x-1);
    }
    
    return result;
}

int F(int x){

    int result;

    if(x==0){
        result = 1;
    }
    else if(x>0 and x%2==0){
        result = 2*H(x) + F(x-1);
    }
    else{
        result = 2*H(x) - F(x-1);
    }

    return result;

}


int main(){

    int x;

    cin >> x;

    cout << F(x);

}
