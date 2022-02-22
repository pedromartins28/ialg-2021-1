#include <iostream>
using namespace std;

int main(){		
	
	float ms, segundos;
	int horas, minutos;
	
	cin >> ms;
	
	segundos = ms/1000;
	
	if(segundos%60==0){
		
		minutos = segundos/60;
		segundos = 0;
		
		};
		
	if(segundos%60!=0){
		
		minutos = (segundos-(segundos%60))/60;
		segundos = segundos%60;
		
		};
		
	if(minutos%60==0){
		
		horas = minutos/60;
		minutos = 0;
		
		};

	if(minutos%60!=0){
		
		horas = (minutos-(minutos%60))/60;
		minutos = minutos%60;
		
		};
		
		
	
	cout << horas<< " : "<< minutos <<" : "<< segundos <<endl;
	
	return 0;

}
