#include <bits/stdc++.h>

using namespace std;

int main(){

    int cont=0, i=0;
    double n, soma=0.0;

    while(i == 0){
        cin >> n;

        if(n < 0 || n > 10){
            cout << "nota invalida" << endl;
        }
        else{
            soma += n;
            cont++;
        }
        if(cont == 2){
            cout << "media = " << fixed << setprecision(2) << soma/2 << endl;
            i = 1;
        }
    }

    return 0;
}