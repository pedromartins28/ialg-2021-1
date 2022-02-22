#include <iostream>
using namespace std;

int F(int x);

int M(int x){

    int result;

    if(x==0){
        result = 0;
    }
    else{
        result = x-F(M(x-1));
    }

    return result;

}

int F(int x){

    int result;

    if(x==0){
        result = 1;
    }
    else{
        result = x-M(F(x-1));
    }

    return result;


}


int main(){

    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    cout << F(a) << " " << F(b) << " " << F(c) << " " << M(d) << " " << M(e) << " " << M(f);

    return 0;

}