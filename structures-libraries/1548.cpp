#include <bits/stdc++.h>

using namespace std;

int main(){

    priority_queue<int> maiorNota;
    vector<int> notas;
    int cases, qtde, n, cont=0;

    cin >> cases;

    while(cases--){
        cin >> qtde;
        for(int i=0; i<qtde; i++){
            cin >> n;
            notas.push_back(n);
        }

        for(const auto& no : notas){
            maiorNota.push(no);
        }

        for(int i=0; i<qtde; i++){
            if(maiorNota.top() == notas[i]){
                cont++;
            }
            maiorNota.pop();
        }

        cout << cont << endl;
        cont=0;
        notas.clear();
    }

    return 0;
}