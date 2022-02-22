#include <iostream>

using namespace std;

int main(){

    float thanos, thor, aux=0;

    cin >> thanos >> thor;

    while(thanos<=thor){

        aux++;
        thanos-=thanos*0.02;
        thor-=thor*0.06;

    }

    cout << aux;


}