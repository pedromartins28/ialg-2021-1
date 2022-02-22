#include <iostream>

using namespace std;

struct car{
    char nome[20];
    int ano;
    int preco;
};

int main(){

    int N, i, ref;

    cin >> N;

    car carro[N];

    for(i=0; i<N; i++){
        cin >> carro[i].nome >> carro[i].ano >> carro[i].preco;
    }

    cin >> ref;

    for(i=0; i<N; i++){
        if(carro[i].preco<ref){
            cout << carro[i].nome << " " << carro[i].ano << " " << carro[i].preco << endl;
        }
    }

    return 0;
}