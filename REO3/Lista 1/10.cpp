#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    float raio, n, aux, rad, PI=3.14159265358, i=0, x, y;

    cin >> raio >> n;

    aux = 360/n;
    rad = (aux*PI)/180;

    cout << fixed << setprecision(2);

    while(i<n){

        x = raio*cos(rad*i);
        y = raio*sin(rad*i);

        cout << x << " " <<  y << endl;
        i++;

    }


    
}