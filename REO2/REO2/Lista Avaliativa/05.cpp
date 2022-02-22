#include <iostream>
using namespace std;

int main(){	
	
	float v[3], y=9999999, x=9999999;
	int i=0;
	
	cin >> v[0];
	cin >> v[1];
	cin >> v[2];
	cin >> v[3];

	while(i<4){		

		int a = i;
		
		if (v[a] < y){	
					
			y = v[a];	
								
		}	
		i++;			
	};

	i=0;

    while(i<4){		

		int a = i;
		
		if (v[a] == y){	
					
			v[a] = 999999.1;	
			break;					
		}	
		i++;			
	};

	i=0;
	
	while(i<4){		

		int a = i;
		
		if (v[a] < x and v[a] >= y){	
					
			x = v[a];	
								
		}		

		i++;		
	};
	
	cout << y << "\n";
	cout << x;
	

	return 0;

}