#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int cod, pais;
    float peso;

    cout << fixed << setprecision(1);

    cin >> cod;
    cin >> peso;
    cin >> pais;


    cout << peso*1000 << "\n";

    if (cod >=1 and cod <=4){

        cout << peso*1000*10 << "\n";

        if(pais == 1){
            cout << peso*1000*10*0 << "\n";
            cout << peso*1000*10;
        }
        else if(pais == 2){
            cout << peso*1000*10*0.15 << "\n";
            cout << peso*1000*10*0.15+peso*1000*10;
        }
        else if(pais == 3){
            cout << peso*1000*10*0.25 << "\n";
            cout << peso*1000*10*0.25+peso*1000*10;;
        }

    }
    else if (cod >=5 and cod <=7){

        cout << peso*1000*25 << "\n";

        if(pais == 1){
            cout << peso*1000*25*0 << "\n";
            cout << peso*1000*25;
        }
        else if(pais == 2){
            cout << peso*1000*25*0.15 << "\n";
            cout << peso*1000*25*0.15+peso*1000*25;
        }
        else if(pais == 3){
            cout << peso*1000*25*0.25 << "\n";
            cout << peso*1000*25*0.25+peso*1000*25;;
        }
        
    }
    else if (cod >=8 and cod <=10){

        cout << peso*1000*35 << "\n";

        if(pais == 1){
            cout << peso*1000*35*0 << "\n";
            cout << peso*1000*35;
        }
        else if(pais == 2){
            cout << peso*1000*35*0.15 << "\n";
            cout << peso*1000*35*0.15+peso*1000*35;
        }
        else if(pais == 3){
            cout << peso*1000*35*0.25 << "\n";
            cout << peso*1000*35*0.25+peso*1000*35;;
        }
        
    }




    
}