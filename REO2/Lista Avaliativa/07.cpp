#include <iostream>

using namespace std;

int main(){

    float mat, cib, cih, ling, red, media;

    cin >> mat;
    cin >> cib;
    cin >> ling;
    cin >> red;
    cin >> cih;

    if (red < 200){

        media = -1;

    }

    if(red >= 200){

        media = (mat*3+cib*2+ling*2+red*2+cih*1)/10;

    }

    cout << media;

}