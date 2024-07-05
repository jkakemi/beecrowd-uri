#include <bits/stdc++.h>

using namespace std;

int main() {

    int qtdTrab, qtdEtapas, et;

    vector<int> trabalhadores;
    vector<int> pequis;

    cin >> qtdTrab >> qtdEtapas;

    int resto = qtdEtapas%qtdTrab;
    int divisao = qtdEtapas/qtdTrab;

    int total=0;
    for (int i = 0; i < qtdTrab; i++) {
        cin >> et;
        pequis.push_back(et);
        trabalhadores.push_back(et);
        total += trabalhadores[i]*divisao;
    }

    fill(trabalhadores.begin(), trabalhadores.end(), total);

    // Aqui ele vai percorrer 2x por conta do resto (duas voltas completas) igual no exemplo
    for (int i = 0; i < resto; i++) {
        rotate(pequis.rbegin(), pequis.rbegin() + 1, pequis.rend());
        // cout << "ETAPA " << i << ": ";
        // cout << "SEQUENCIA: " << endl;
        for (int j = 0; j < qtdTrab; j++) {
            trabalhadores[j] += pequis[j];
            // cout << trabalhadores[j] << endl;
        }
    }

    rotate(trabalhadores.begin(), trabalhadores.begin() + 1, trabalhadores.end());
    for(int i=0; i<qtdTrab; i++){
        if(i > 0){
            cout << " ";
        }
        cout << trabalhadores[i];
    }
    cout << endl;

    return 0;
}

/* 
3 8
6 3 7

2 voltas completas
32 32 32
soma-se novamente nas mesmas posições
38 35 39
mais uma volta quebrada
45 41 42

*/