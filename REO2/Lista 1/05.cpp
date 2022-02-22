#include <iostream>
#include <cmath>
using namespace std;

int main(){		

	int h1, h2, result;
	
	cin >> h1;
	cin >> h2;
	
	result = h2*100/h1;
	result = ceil(result);
	
	cout << result <<endl;
	
	return 0;

}
