#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, j1, j2, r, a;

    cin >> p >> j1 >> j2 >> r >> a;

    int soma = j1+j2;
    int imparPar;

    if(soma%2==0){
        imparPar = 0; // ele é par
    }
    else{
        imparPar = 1; // ele é impar
    }

    if(p == 1 && imparPar == 0 && r == 0 && a == 0){
        cout << "Jogador 1 ganha!" << endl;
    }
    else if(p == 0 && imparPar == 1 && r == 0 && a == 0){
        cout << "Jogador 1 ganha!" << endl;
    }
    else if(r == 1 && a == 0){
        cout << "Jogador 1 ganha!" << endl;
    }
    else if(r == 1 && a == 1){
        cout << "Jogador 2 ganha!" << endl;
    }
    else if(p == 1 && imparPar == 1 && r == 0 && a == 0){
        cout << "Jogador 2 ganha!" << endl;
    }
    else if(p == 0 && imparPar == 0 && r == 0 && a == 0){
        cout << "Jogador 2 ganha!" << endl;
    }
    else if(r == 0 && a == 1){
        cout << "Jogador 1 ganha!" << endl;
    }

    return 0;
}