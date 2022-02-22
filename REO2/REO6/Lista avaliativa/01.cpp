#include <iostream>
#include <string>
using namespace std;

struct stormtroopers{

    string nome;
    string planeta;
    int batalhas;

};

struct planeta{

    string nome;
    int quantidade;
    float media;

};

int main(){

    int N, i, j, aux, cont =0;
    float conta = 0, soma;
    cin >> N;

    stormtroopers storm[N]; 

    for(i=0; i<N; i++){
        aux=0;
        cin >> storm[i].nome;
        cin >> storm[i].planeta;
        cin >> storm[i].batalhas;

        for(j=0; j<i; j++){

            if(storm[i].planeta == storm[j].planeta){
                j=i;
                aux=1;
            }
        }

        if(aux == 0){
            cont++;
        }
    }

    planeta result[cont];

    result[0].nome = storm[0].planeta;
    int aux2 = 1;

    for(i=0; i<N; i++){
        aux = 0;
        for(j=0; j<cont; j++){
            if(storm[i].planeta == result[j].nome){
                aux= 1; 
                j = cont;
            }
        }

        if(aux == 0){
            result[aux2].nome = storm[i].planeta;
            aux2++;
        }

    }


    for(i=0; i<cont; i++){
        soma = 0;
        conta = 0;
        for(j=0; j<N; j++){
            if(storm[j].planeta == result[i].nome){
                soma+=storm[j].batalhas;
                conta++;
            }
        }
        result[i].media = soma/conta;
        result[i].quantidade = conta;
    }


    for(i=0; i<cont; i++){
        cout << result[i].nome << " " << result[i].quantidade << " " << result[i].media << endl;
    }

    return 0;

}