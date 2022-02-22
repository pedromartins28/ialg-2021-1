#include <iostream>
using namespace std;

long int i=2, result=1, j=1, k=2, sum=0;

long int fatorial(long  int x){


    
    if (i<=x){
        result*=i;
        cout << result << endl;
        i++;
        return fatorial(x);
    }

	return result;

}

long int comb(long  int n){
	
	long int ret = fatorial(n)/fatorial(k)*fatorial(n-k);
	
	return ret;
	
}

long int somatorio(long int x){
	
	long int aux;
	
	aux = comb(x);
	
	if(k <= aux){
		
		sum+= i;
		j++;
		return somatorio(x);
		
	}
	
	return sum;
	
		
}

int main(){

    long int n;
    cin >> n;
	cout << somatorio(n);

    return 0;
}

