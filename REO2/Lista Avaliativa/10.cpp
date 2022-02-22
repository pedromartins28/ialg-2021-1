#include <iostream>
#include <cmath>
using namespace std;

int main(){	

	int x, y;

	cin >> x;
	cin >> y;

	if (x>0 and y>0){

		cout << x/y;

	}

	if (x<0 and y>0){
		
		cout << x*y;

	}

	if (x<0 and y<0){

		cout << x+y;
		
	}

	if (x>0 and y<0){
		
		cout << pow(x, y);

	}

	return 0;

}
