#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


float tempo(int h1, int m1, int h2, int m2){

    int x;
    
    if(h2 == 00 and h1 >20){
		
		h2 = 24;
		
	}
	
	if(h2 == 01 and h1 >20){
		
		h2 = 25;
		
	}

    if(h1-h2==0){

        x = m2-m1;

    }
    else if(h2-h1==1){

        x = 60-m1+m2;

    }
    else if(h2-h1==2){

        x = 60-m1+m2+60;

    }


    return x;
    

}


float penalidade(int h1, int m1, int h2, int m2){
	
	
	float result = tempo(h1, m1, h2, m2);

    if(result>65){

        result = (result-65)*0.1;

    }
    else if(result<55){

        result = (55-result)*0.1;

    }
    else{
		
		result = 0;
		
	}

    return result;

}


int main(){

    string nome;
    int j=0, h1, m1, h2, m2;
    
    cout << fixed << setprecision(1);
  

    while(j==0){
	
		cin.ignore();
        getline(cin, nome);
		
		if(nome!= "fim"){
			
			cin >> h1 >> m1;
			cin >> h2 >> m2;             
			
			cout << penalidade(h1, m1, h2, m2) << endl;    			
		}
		
		else{
			
			j++;
		}
				      

    }


    return 0;

}
