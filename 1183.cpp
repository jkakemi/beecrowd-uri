#include <bits/stdc++.h>

#define TAM 12

using namespace std;

int main()
{

    int cont=0;
    double soma=0.0, mat[TAM][TAM], media=0.0;
    char t;

    cin >> t;
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cin >> mat[i][j];
            if(i < j){
                soma += mat[i][j];
                cont++;
            }
        }
    }

    if(t == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    }
    else{
        media = soma/cont;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}