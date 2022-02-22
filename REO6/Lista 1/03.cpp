#include <iostream>

using namespace std;

struct pessoa{
    float salario;
    int idade;
    int filhos;
};

int main(){

    int N;
    float media=0, maior=0, mediaF=0, cont=0;

    cin >> N;

    pessoa hab[N];

    for(int i=0; i<N; i++){
        cin >> hab[i].salario >> hab[i].idade >> hab[i].filhos;
        if(hab[i].salario>maior){
            maior = hab[i].salario;
        }
        if(hab[i].salario>1000.00){
            cont++;
        }
        media+= hab[i].salario;
        mediaF+= hab[i].filhos;
    }

    if(N>0){
        media/= N;
        mediaF/= N;
        cont = cont/N*100;

        cout << media << endl;
        cout << mediaF << endl;
        cout << maior << endl;
        cout << cont << "%" << endl;
    }

    else{
        cout << N << endl;
        cout << N << endl;
        cout << N << endl;
        cout << N << endl;
    }    

    return 0;
}