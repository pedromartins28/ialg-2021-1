#include <iostream>
#include <string>
using namespace std;

string mes(int x){

    string mes;

    if(x==1){
        mes="janeiro";
    }

    else if(x==2){
        mes="fevereiro";
    }

    else if(x==3){
        mes="marco";
    }

    else if(x==4){
        mes="abril";
    }

    else if(x==5){
        mes="maio";
    }

    else if(x==6){
        mes="junho";
    }

    else if(x==7){
        mes="julho";
    }

    else if(x==8){
        mes="agosto";
    }

    else if(x==9){
        mes="setembro";
    }

    else if(x==10){
        mes="outubro";
    }

    else if(x==11){
        mes="novembro";
    }

    else if(x==12){
        mes="dezembro";
    }

    else{
        mes="erro";
    }

    return mes;
}

int main(){

    int N;
    cin >> N;

    cout << mes(N);

    return 0;

}

