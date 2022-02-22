#include <iostream>
using namespace std;

int i=0, result=0;

int sucessor(int x){
    return x+1;
}

int antecessor(int x){
    return x-1;
}

int calc(int x, int y){

    if(x>0 and y>0 and i<y){

        if(i==0){
            result = x;
        }

        result = sucessor(result);
        i++;
        calc(x, y);           

    }

    else if(x>0 and y<0 and i<x){

        if(i==0){
            result = y;
        }

        result = sucessor(result);
        i++;
        calc(x, y);
        
        

    }

    else if(x<0 and y>0 and i<y){

        if(i==0){
            result = x;
        }

        result = sucessor(result);
        i++;
        calc(x, y);
        

    }
    else if(x<0 and y<0 and i>y){

        if(i==0){
            result = x;
        }

        result = antecessor(result);
        i--;
        calc(x, y);
        

    }
    else if(x==0){
        
        result = y;
            		
		
	}
	else if(y==0){
        
        result = x;
                		
		
	}
	
	return result;


}

int main(){

    int x, y;
    cin >> x >> y;

    cout << calc(x, y);

    return 0;

}
