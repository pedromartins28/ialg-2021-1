#include <iostream>
#include <string>
using namespace std;

struct produto{
    int ID;
    string descricao;
    float valor; 
};


int ordena(produto P[], int N){

    int i, aux;
    float p;
    for (i = 1; i < N; i++){ 
        p = P[i].valor;
        aux = i-1; 
        while ((aux>=0) and (p < P[aux].valor)){
            P[aux+1] = P[aux]; 
            aux--;
        }
        P[aux+1].valor = p;
    }
    
    return 0;
    
}

int main(){

    int N, i;
    float min, max;
    cin >> N;

    produto P[N];

    for(i=0; i<N; i++){
        cin >> P[i].ID;
        cin.ignore();
        getline(cin, P[i].descricao);
        cin >> P[i].valor;
    }

    cin >> min >> max;

    ordena(P, N);

    bool encontrou = false;

    for(i=0; i<N; i++){
        if(P[i].valor>min and P[i].valor<max){
            encontrou = true;
            cout << P[i].ID << " " << "\"" << P[i].descricao << "\""  << " " << P[i].valor << endl;
        }
    }

    if(encontrou == false){
        cout << "Inexistente";
    }

    return 0;


}
