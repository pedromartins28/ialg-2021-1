#include <iostream>
using namespace std;

int main(){		
	
	int reais, valor, aux, vinte=0, dez=0, cinco=0, dois=0, um=0, x=1;
	
	cin >> reais;
	cin >> valor;
	
	aux = reais - valor;
	
	if (aux%20==0){
		vinte = aux/20;
	}
	else if (aux%20>0){
		vinte = (aux-aux%20)/20;
		aux = aux%20;

		if(aux >=10){

			if (aux%10==0){
				dez = aux/10;
			}
			else if (aux%10>0){
				dez = (aux-aux%10)/10;
				aux = aux%10;

				if(aux >=5){

					if (aux%5==0){
						cinco = aux/5;
					}
					else if (aux%5>0){
						cinco = (aux-aux%5)/5;
						aux = aux%5;

						if (aux>=2){
							if (aux%2==0){
								dois = aux/2;
							}
							else if (aux%2>0){
								dois = (aux-aux%2)/2;
								aux = aux%2;
								um = aux;
							
							}
						}

					
					}

				}
				
			}

		}

		if(aux >=5){

					if (aux%5==0){
						cinco = aux/5;
					}
					else if (aux%5>0){
						cinco = (aux-aux%5)/5;
						aux = aux%5;

						if (aux>=2){
							if (aux%2==0){
								dois = aux/2;
							}
							else if (aux%2>0){
								dois = (aux-aux%2)/2;
								aux = aux%2;
								um = aux;
							
							}
						}

					
					}

		}

		if (aux>=2){
							if (aux%2==0){
								dois = aux/2;
							}
							else if (aux%2>0){
								dois = (aux-aux%2)/2;
								aux = aux%2;
								um = aux;
							
							}
		}

	}
	
	cout << vinte <<endl;
	cout << dez <<endl;
	cout << cinco <<endl;
	cout << dois <<endl;
	cout << um <<endl;
	
	return 0;

}
