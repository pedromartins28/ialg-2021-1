#include <iostream>
#include <iomanip>

using namespace std;


int main(){	

	int a, b, c, d, e, f, g;
	double soma, desc;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;

	soma = a*28.9+b*19.9+c*7.95+d*2.99+e*1.5+f*1.85+g*8.7;

	if (soma <= 200){
		desc = soma*0.05;
	}

	if (soma > 200){
		desc = soma*0.1;
	}

	std::cout << fixed << std::setprecision(2) << soma << endl;
	std::cout << fixed << std::setprecision(2) << desc << endl;
	std::cout << fixed << std::setprecision(2) << soma - desc << endl;


	return 0;

}
