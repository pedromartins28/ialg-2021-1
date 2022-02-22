#include <iostream>
using namespace std;

int main(){		
	
	int valor, aux, cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0, x=1;
	
	cin >> valor;
	
	aux = valor;
	
	while(x ==1){
		
		if(aux >= 100){
			aux-=100;
			cem+=1;
		};
		
		if(aux<100 and aux >=50){
			aux-=50;
			cinquenta+=1;
		};
		
		if(aux<50 and aux >=20){
			aux-=20;
			vinte+=1;
		};
		
		if(aux <20 and aux >=10){
			aux-=10;
			dez+=1;
		};
			
		if(aux <10 and aux >=5){
			aux-=5;
			cinco+=1;
		};
			
		if(aux <5 and aux >=2){
			aux-=2;
			dois+=1;
		};
			
		if(aux <2 and aux >=1){
			aux-=1;
			um+=1;
		};
			
		if(aux == 0){
			x = 0;
		};
		
	};
	
	cout << cem <<endl;
	cout << cinquenta <<endl;
	cout << vinte <<endl;
	cout << dez <<endl;
	cout << cinco <<endl;
	cout << dois <<endl;
	cout << um <<endl;
	
	return 0;

}
