#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int valor, cliente, restou, cont=0;
    vector<int> notas = {100, 50, 20, 10, 5, 2};

    cin >> valor >> cliente;

    while(valor != 0 && cliente != 0){
        restou = cliente - valor;
        for(int i=0; i<notas.size(); i++){
            if (notas[i] <= restou) {
                restou = restou % notas[i];
                cont++;
            }
            if(restou == 0){
                break;
            }
        }

        if(cont == 2){
            cout << "possible" << endl;
        }
        else{
            cout << "impossible" << endl;
        }

        cin >> valor >> cliente;
        cont = 0;
    }

    return 0;
}
