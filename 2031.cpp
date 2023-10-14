#include <bits/stdc++.h>

using namespace std;

int main()
{

    int cases;
    string j1, j2;

    cin >> cases;

    while(cases--){
        cin >> j1;
        cin >> j2;

        if(j1 == "ataque" && j2 == "ataque"){
            cout << "Aniquilacao mutua" << endl;
        }
        if(j1 == "pedra" && j2 == "pedra"){
            cout << "Sem ganhador" << endl;
        }
        if(j1 == "papel" && j2 == "papel"){
            cout << "Ambos venceram" << endl;
        }
        if(j1 == "ataque" && j2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }
        if(j2 == "ataque" && j1 == "papel"){
            cout << "Jogador 2 venceu" << endl;
        }
        if(j1 == "pedra" && j2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }
        if(j2 == "pedra" && j1 == "papel"){
            cout << "Jogador 2 venceu" << endl;
        }
        if(j1 == "ataque" && j2 == "pedra"){
            cout << "Jogador 1 venceu" << endl;
        }
        if(j2 == "ataque" && j1 == "pedra"){
            cout << "Jogador 2 venceu" << endl;
        }
    }

    return 0;
}