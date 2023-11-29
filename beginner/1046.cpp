#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int hi, hf, duracao;

    cin >> hi >> hf;

    if(hi >= 1 || hi <= 24 && hf >= 1 || hf <= 24){
        if(hf > hi){
            duracao = hf - hi;
            cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
        }
        else{
            duracao = hf + 24 - (hi);
            cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
        }
    }
    return 0;
}