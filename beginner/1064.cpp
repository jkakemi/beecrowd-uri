#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    double a, soma=0.0, media;
    int cont=0;

    for(int i=0; i<6; i++){
        cin >> a;

        if(a > 0){
            cont++;
            soma += a;
        }
    }
    media = soma/cont;
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;
    
    return 0;
}