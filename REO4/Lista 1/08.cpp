#include <iostream>
using namespace std;

int a, b;

int simplifica(int c, int d){

    a = c;
    b = d;

    int i;
    
    if (a == 0){
		b = 0;
	}
	
	
	else{

	if(a>b){

		for(i=a; i>=2; i--){

			if(a%i==0 and b%i ==0){

				a/=i;
				b/=i;
				i=2;

			}

		}

	}
	else{

		for(i=b; i>=2; i++){

			if(a%i==0 and b%i ==0){

				a/=i;
				b/=i;
				i=2;

			}

		}

	}
		
		

    
    }

    return 0;

}

int main(){

    int x, y;

    cin >> x;
    cin >> y;

    simplifica(x, y);

    cout << a << endl << b;

    return 0;

}
