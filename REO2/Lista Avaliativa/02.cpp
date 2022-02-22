#include <iostream>
using namespace std;

int main(){	
	
	int energia, tempo, socos=0, i=0, sec;
	
	cin>>energia;
	cin>>tempo;
	
	sec=tempo*60;
	
	while(i<sec){
		
		i+=5;
		socos=socos+10;
		energia=energia-12*10;
		
	};
		
	cout << socos << endl;
	cout << energia;

	return 0;

}
