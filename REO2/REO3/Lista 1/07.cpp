#include <iostream>
using namespace std;

int main(){

    float N, H, mediaM=0, mediaF=0, mediaGeral=0, i=0, M=0, F=0, maior=0, menor=9999;
    char S;

    cin >> N;

    while(i<N){
        i++;
        cin >> H >> S;
        mediaGeral+= H;

        if(S == 'm'){
            M++;
            mediaM+= H;
        }
        else if(S == 'f'){
            F++;
            mediaF+= H;
        }
        if(H>maior){
            maior=H;
        }
        if(H<menor){
            menor=H;
        }

    }

    mediaGeral/=N;
    mediaM/=M;
    mediaF/=F;

    cout << maior << endl << menor << endl;

    if(F==0){
        cout << "erro" << endl;
    }
    else if(mediaF>0){
        cout << mediaF << endl;
    }

    if(M==0){
        cout << "erro" << endl;
    }
    else if(mediaM>0){
        cout << mediaM << endl;
    }

    cout << mediaGeral;

    
    
}