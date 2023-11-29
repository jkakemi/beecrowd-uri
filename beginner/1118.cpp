#include <bits/stdc++.h>

using namespace std;

double media();

int main(){

    int novo = 1;

    while (novo == 1) {
        double total = media();
        cout << "media = " << fixed << setprecision(2) << total << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> novo;

            if (novo != 1 && novo != 2) {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> novo;
            }
        }while(novo != 1 && novo != 2);

        if(novo == 2) {
            break;
        }
    }

    return 0;
}

double media(){
    int cont=0;
    double n, soma=0.0;

    while(cont != 2){
        cin >> n;

        if(n < 0 || n > 10){
            cout << "nota invalida" << endl;
        }
        else{
            soma += n;
            cont++;
        }
    }

    return soma/2;
}