#include <iostream>
using namespace std;

int main(){
    int N, i=0, X=0;

    cin >> N;

    while (i<=N)
    {
        X+=i;
        i++;
    }
    
    cout << X;
    
}