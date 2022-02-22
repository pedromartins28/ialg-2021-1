#include <iostream>
using namespace std;

int main(){		
	
	int produto, caixa, x=1;
	
	cin >> produto;
	
	while(x==1){
		
		if(produto%6==0){
			
			caixa = produto/6;
			x=0;
			
			}
		else{
			
			produto++;
			
			}
		
		}
	
	cout << caixa <<endl;
	
	return 0;

}
