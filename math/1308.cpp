#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;

    while(cases--){
        int n;

        cin >> n;
        int s=0, i=1;
        int cont=0;
        
        while(s < n){
            s+=i;
            cont++;
            i++;
        }
        if(s>n){
            cout << cont-1 << endl;
        }
        else{
            cout << cont << endl;
        }
    }

    return 0;
}