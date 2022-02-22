#include <iostream>

using namespace std;

int main(){

    char sexo;
    float altura;

    cin >> sexo >> altura;

    if(sexo == 'M'){

        cout << 72.7*altura-58;

    }
    else{

        cout << 62.1*altura-44.7;

    }

}