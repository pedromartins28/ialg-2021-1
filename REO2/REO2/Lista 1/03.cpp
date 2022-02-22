#include <iostream>
#include <iomanip>
using namespace std;

int main(){	
	
	float salario;
	
	cin >> salario;
	
	float dolar = salario/2.13;
	float euro = salario/2.84;
	float libra = salario/3.34;
		
	std::cout << std::fixed << std::setprecision(2) << dolar <<endl;
	std::cout << std::fixed << std::setprecision(2) << euro <<endl;
	std::cout << std::fixed << std::setprecision(2) << libra <<endl;
	
	return 0;

}
