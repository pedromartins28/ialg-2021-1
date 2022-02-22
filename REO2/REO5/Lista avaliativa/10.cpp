#include <iostream>
using namespace std;

int main(){
    int m, n, i, x=0, y=0;
    cin >> m >> n;
    int o = m+n;
    char v1[m], v2[n], v3[o];

    for(i=0; i<m; i++){
        cin >> v1[i];
    }
    for(i=0; i<n; i++){
        cin >> v2[i];
    }

    for(i=0; i<o; i++){
       
        if(v1[x] < v2[y] and x<m){
            v3[i] = v1[x];
            x++;
        }
        else if(v1[x] >= v2[y] and y<n){
            v3[i] = v2[y];
            y++;
        }
        else if(x==m){
            v3[i] = v2[y];
            y++;
        }
        else if(y==n){
            v3[i] = v1[x];
            x++;
        }
        

        cout << v3[i] << " ";

    }

    return 0;

}