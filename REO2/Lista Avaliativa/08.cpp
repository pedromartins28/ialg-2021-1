#include <iostream>
using namespace std;

int main(){

	float real;
	char moeda;

	cin >> real;
	cin >> moeda;

	cout.precision(5);

	if(moeda == 'D'){
		cout << real/3.26;
	};

	if(moeda == 'E'){
		cout << real/3.88;
	};

	if(moeda == 'P'){
		cout << real/0.19;
	};

	return 0;

}
