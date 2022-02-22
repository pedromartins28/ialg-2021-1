#include <iostream>
#include <cstring>

using namespace std;

struct paciente{
    string nome;
    char sexo;
    float altura;
    float peso;
};

int main(){

    int i, N;
    float maior=0, aux;

    cin >> N;

    paciente pessoa[N];

    for(i=0; i<N; i++){
        cin >> pessoa[i].nome >> pessoa[i].sexo >> pessoa[i].altura >> pessoa[i].peso;
        if(pessoa[i].peso > maior){
            maior = i;
        }
    }

    cout << pessoa[int(maior)].nome << endl;

    for(i=0; i<N; i++){
        if(pessoa[i].sexo == 'H'){
            aux = 72.7 * pessoa[i].altura - 58;
            if(pessoa[i].peso>aux){
                cout << pessoa[i].nome << " -" << pessoa[i].peso-aux << endl;
            }
        }
        else{
            aux = 62.1 * pessoa[i].altura - 44.7;
            if(pessoa[i].peso>aux){
                cout << pessoa[i].nome << " -" << pessoa[i].peso-aux << endl;
            }
        }
    }

    for(i=0; i<N; i++){
        if(pessoa[i].sexo == 'H'){
            aux = 72.7 * pessoa[i].altura - 58;
            if(pessoa[i].peso<aux){
                cout << pessoa[i].nome << " " << (pessoa[i].peso-aux)*-1 << endl;
            }
        }
        else{
            aux = 62.1 * pessoa[i].altura - 44.7;
            if(pessoa[i].peso<aux){
                cout << pessoa[i].nome << " " << (pessoa[i].peso-aux)*-1 << endl;
            }
        }
    }



    return 0;
}