#include <iostream>
#include <math.h>
using namespace std;

int main(){		
	
	double x1, x2, y1, y2, result, aux;
	
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	
	aux = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	result = sqrt(aux);
	
	cout.precision(7);
	cout << result <<endl;
	
	return 0;

}
