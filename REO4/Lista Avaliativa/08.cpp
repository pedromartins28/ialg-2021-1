#include <iostream>
using namespace std;


int C(int N, int K){

    int result;

    if(K==0 or K==N){
        result = 1;
    }
    else{
        result = C(N-1, K-1)+C(N-1, K);
    }

    return result;


}


int main(){

    int N, K;
    cin >> N >> K;
    cout << C(N, K);

    return 0;

}