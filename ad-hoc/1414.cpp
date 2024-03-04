#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, pontos, total, cont=0;
    string nome;

    while(cin >> t >> n){
        if(t == 0 && n == 0){ break; }

        total = 3*n;
        cont=0;

        for(int i=0; i<t; i++){
            cin >> nome >> pontos;

            cont += pontos;

        }
        cout << total-cont << endl;

    }

    return 0;
}