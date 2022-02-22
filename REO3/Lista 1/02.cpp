#include <iostream>
using namespace std;

int main(){

    float nota, maior=0, segunda=0;
    int matricula, matriculamaior, matriculasegunda, i=0;
    bool aux = true;

    while(aux){

        cin >> matricula;
        i++;

        if (matricula == 0 and i>2){
            aux = false;
        }
        else{

            cin >> nota;

            if(nota>maior){
                segunda = maior;
                matriculasegunda = matriculamaior;
                maior = nota;
                matriculamaior = matricula;
            }
            else if(nota<maior){
                if(nota>segunda){
                    segunda = nota;
                    matriculasegunda = matricula;
                }
            }
            else{
                segunda = nota;
                matriculasegunda = matricula;
            }

        }

    }

    cout << matriculamaior << " " << maior << endl << matriculasegunda << " " << segunda;


    return 0;
}