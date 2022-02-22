#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float comprimento, result;		
	
	cin >> comprimento;
	
	result = sqrt(comprimento)*14.6;
	
	
	cout.precision(5);
	cout << result <<endl;
	
	return 0;

}
