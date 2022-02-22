#include <iostream>
#include <math.h>
using namespace std;

int main(){		
	
	float homens, aux;
	
	cin >> homens;
	homens-=1000;
	
	aux = ceil(homens/80);
	
	cout << aux <<endl;
	
	return 0;

}
