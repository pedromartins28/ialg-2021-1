#include <iostream>
using namespace std;

int main(){	
	
	float salario, saida, horas;
	
	cin >> salario;
	cin >> horas;
	
	int bruto = (salario*0.05*horas);
	
	saida = bruto-(bruto*0.23);
	
	cout << saida <<endl;
	return 0;

}
