#include <iostream>
#include <string>

using namespace std;

int main(){

    string cor1, cor2, N;

    cin >> cor1;
    cin >> cor2;
    cin >> N;

    if (N == string(N.rbegin(), N.rend())) {
        cout << cor1 << endl;
    } 
    else {
        cout << cor2 << endl;
    }
    
    
}