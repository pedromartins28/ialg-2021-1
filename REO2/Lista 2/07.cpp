#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);

    int x;
    float y;

    cin >> x;
    cin >> y;

    if(x==1){
        cout << (y*0.005)+y;
    }
    else if(x==2){
        cout << (y*0.03)+y-30;
    }
    
}