#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct pokemon{
    string nome;
    string tipo;
    string dist;
};

void ordena(struct pokemon P[], int fim){
    int i;

    pokemon aux;

    for(i=0; i<fim; i++){
        if(P[i].dist > P[i+1].dist){
            aux = P[i];
            P[i] = P[i+1];
            P[i+1] = aux;
            i=-1;
        }
    }
    
}

void write(){
	
    ifstream arquivo("pokemon.txt");
    string aux;

    while (arquivo >> aux){
		cout << aux << endl;
	}
         
	arquivo.close();

}

int main(){

    fstream arq("dados.txt", ios::in);
    fstream arq2("pokemon.txt", ios::out);
    int i, N, Q, cont=0, aux, aux2;
    string T, leitura, temp;   
    bool read = false;
         
	arq >> N;
	pokemon P[N];
	
	while(getline(arq, leitura)){
		
		if(!read){
			read = !read;
		}
		
		else{
						
			aux = leitura.size();
			temp = "";
			
			for(i=0; i<aux; i++){
				if(leitura[i] != ' '){
					temp+=leitura[i];
				}
				else{
					aux2=i;
					i=aux;
				}
			}
			
			P[cont].nome=temp;
			temp = "";
			
			for(i=aux2+1; i<aux; i++){
				if(leitura[i] != ' '){
					temp+=leitura[i];
				}
				else{
					aux2=i;
					i=aux;
				}
			}
			
			P[cont].tipo=temp;
			temp = "";
			
			for(i=aux2+1; i<aux; i++){
				temp+=leitura[i];
			}
			
			aux = stoi(temp);
					
			P[cont].dist=aux;
			
			cont++;
			
		}
		
	}
	
	aux=N-1;

    ordena(P, aux);
	
    cin >> T;
    cin >> Q;

	cont=0;
	
    for(i=0; i<N; i++){
        if(P[i].tipo == T and cont<Q){
            arq2 << P[i].nome << endl;
            cont++;
            if(cont==Q){
				i=N;
			}
        }
    }

    arq.close();
    arq2.close();

    write();

    return 0;
    
}
