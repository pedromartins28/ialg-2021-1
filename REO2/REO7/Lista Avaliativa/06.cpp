#include <iostream>
#include <fstream>

using namespace std;

double calc(fstream &arq, int N){
	
	double result; 
	 
	if(N==1){
		result=1;
		arq << result << endl;
	}
	  
	else if(N>1){
		result=1+(1/(calc(arq, N-1)));
		arq << result << endl; 
	}

	return result;
	  
}

int main(){
	
	int N; 
	double aux;

	cin >> N;

	fstream arq("phi.txt", ios::out);

	aux = calc(arq, N);

	cout << aux << endl;
	
	arq.close();
	
	return 0;
	
}
