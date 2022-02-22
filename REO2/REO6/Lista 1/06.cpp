#include <iostream>

using namespace std;

struct aluno{
    int id;
    int matricula;
};

int main(){

    int i, N, V[4];

    cin >> N;

    aluno pessoa[N];
    aluno aux;

    for(i=0; i<N; i++){
        cin >> pessoa[i].id >> pessoa[i].matricula;
    }

    for(i=0; i<N; i++){
        if(pessoa[i].id>pessoa[i+1].id){
            aux = pessoa[i];
            pessoa[i] = pessoa[i+1];
            pessoa[i+1]= aux;
            i=0;
        }
    }


    cout << endl;
    
    for(i=0; i<4; i++){
        cin >> V[i];
    }

    for(i=0; i<N; i++){
        cout << pessoa[i].id << " ";
    }

    for(i=0; i<4; i++){
        for(int j=0; j<N; j++){
            if(V[i] == pessoa[j].id){
                cout << pessoa[j].matricula << endl;
                j=N;
            }
        }  
    }    

    return 0;
}