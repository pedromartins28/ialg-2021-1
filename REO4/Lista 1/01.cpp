#include <iostream>
using namespace std;
void divisores (int n){

    int divisor = 0;
    int cont = 0;

    if (n >= 2){

        while (divisor <= n){
            divisor++;

            if ((n % divisor == 0) and (divisor <= n)){
                cout << divisor << endl;
                cont++;
            }

        }

    }

}
 
int segundom(int n){

    int divisor = 1;
    int cont = 0;

    if (n >= 2){


        while(divisor <= n){
            

            if (n % divisor == 0){
                cont++;
            }
            divisor++;


        }


        if (cont > 2){
            divisor = 1;

            while (divisor <= n){

            if ((n % divisor == 0 and divisor !=1)){
                return divisor;
            }
            divisor++;
 
            }
        }

        else{
            divisor = 1;
            return divisor;
        }


}

    return segundom(n);

}

int segundoM(int n){

    int divisor = 1;
    int cont = 0;

    if (n >= 2){

        while(divisor <= n){
    

            if (n % divisor == 0){
                cont++;
            }

            divisor++;

        }

        if (cont > 2){
            divisor = n;

            while (divisor >=0 ){

            if ((n % divisor == 0 and divisor !=n)){
                return divisor;
            }

            divisor--;
 
            }
        }

        else{
            return n;
        }



}

    return segundoM(n);

}


int main (){

    int N;

    cin >> N;

    divisores(N);
    cout << segundom(N) << " " << segundoM(N);

    if (N == 0){
    cout << 0 << endl;
    }

    return 0;
}
