#include <iostream>
using namespace std;


int result=1;

int calc(int x){

    if(x<0){

        x*=-1;

    }

    if(x>=10){
        x=x/10;
        result++;
        calc(x);
    }

    return result;

}

int main(){

    int x;

    cin >> x;

    cout << calc(x);

    return 0;

}