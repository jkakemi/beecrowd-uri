#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> flavinho;
    vector<int> sorteado;
    int aposta, sorteio, cont=0;

    for(int i=0; i<6; i++){
        cin >> aposta;
        flavinho.push_back(aposta);
    }

    for(int i=0; i<6; i++){
        cin >> sorteio;
        sorteado.push_back(sorteio);
    }

    sort(flavinho.begin(), flavinho.end());
    sort(sorteado.begin(), sorteado.end());

    for(const auto& f : flavinho ){
        for(const auto& s : sorteado){
            if(f == s){
                cont++;
            }
        }
    }

    if(cont == 3){
        cout << "terno" << endl;
    }
    else if(cont == 4){
        cout << "quadra" << endl;
    }
    else if(cont == 5){
        cout << "quina" << endl;
    }
    else if(cont == 6){
        cout << "sena" << endl;
    }
    else{
        cout << "azar" << endl;
    }

    return 0;
}