#include <iostream>
#include <string>

using namespace std;

int buscaL(int **M, int L, int C, int busca){
	
	int i, j, pos=-1;
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			if(M[i][j]==busca){
				pos=i;
				i=L;
				j=C;
			}
		}
	}
	
	return pos;
	
}

int buscaC(int **M, int L, int C, int busca){
	
	int i, j, pos=-1;
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			if(M[i][j]==busca){
				pos=j;
				i=L;
				j=C;
			}
		}
	}
	
	return pos;
	
}

int main(){
	
	int i, j, L, C, **M = NULL, busca;
	
	cin >> L >> C;
	
	M = new int *[L];
	
	for(i=0; i<L; i++){
		M[i] = new int[C];
	}
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			cin >> M[i][j];
		}
	}
	
	cin >> busca;
		
	if(buscaL(M, L, C, busca) != -1){
		cout << buscaL(M, L, C, busca) << " " << buscaC(M, L, C, busca) << endl;
	}
	else{
		cout << "ausente" << endl;
	}
	
	for(i=0; i<L; i++){
		delete[] M[i];
	}
	
	delete[] M;
	
	return 0;
	
}
