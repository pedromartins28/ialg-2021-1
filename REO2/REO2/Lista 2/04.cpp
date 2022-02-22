#include <iostream>

using namespace std;

int main(){

    float mat, nat, ling, red, hum;

    cin >> mat >> nat >> ling >> red >> hum;

    if (red>=200){
        cout << (mat*3+nat*2+ling*2+red*2+hum*1)/10;
    }
    else{
        cout << "-1";
    }
}