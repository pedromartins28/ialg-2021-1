#include <iostream>

using namespace std;

float fatorial(float num){
	
	float i, result=1;
	
	for(i=2; i<=num; i++){
		result*= i;
	}
	
	return result;
}

float* obterVetor(int &tam){
	
	int i;
	float *V = new float[tam];
	
	for(i=0; i<tam; i++){
		V[i] = (i*i+1.75)/(2*fatorial(i)+i);
	}
	
	return V;
	
}


int main(){
	
	int i, N, M;
	
	cin >> N;
	
	float *new_V = obterVetor(N);
	
	cin >> M;
	
	for(i=M; i<N; i++){
		cout << new_V[i] << endl;
	}
	
	delete [ ] new_V;
	
	return 0;
	
}
