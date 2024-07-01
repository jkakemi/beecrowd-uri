#include <bits/stdc++.h>

using namespace std;

int main() {

    int qtdTrab, qtdEtapas, pequis;
    map<int, int> trabalhadores;

    cin >> qtdTrab >> qtdEtapas;

    for (int i = 0; i < qtdTrab; i++) {
        cin >> pequis;
        trabalhadores[i] = pequis;
    }

    // for(size_t i=0; i<qtdEtapas; i++){
        
    // }
    map<int, int>::iterator it;
    for(it = trabalhadores.begin(); it != trabalhadores.end(); ++it){
        // cout << it->first << " -> " << it-> second << endl;
        // rotate(trabalhadores.rbegin(), trabalhadores.rbegin() + 1 ,trabalhadores.rend());
        
        cout << it->first << " -> " << it->second << endl;
        
    }

    // vector<int> trabalhadores(qtdTrab);
    // vector<int> pequis(qtdTrab);

    // for (int i = 0; i < qtdTrab; i++) {
    //     cin >> pequis[i];
    //     trabalhadores[i] = pequis[i];
    // }

    // vector<int> sum(qtdTrab, 0);
    // for (int i = 0; i < qtdEtapas; i++) {
    //     int last = pequis.back();

    //     for (int j = qtdTrab-1; j > 0; j--) {
    //         pequis[j] = pequis[j - 1];
    //     }
    //     pequis[0] = last;
    
    // }

    // FORMA INEFICIENTE
    // for (int i = 1; i < qtdEtapas; i++) {
    //     rotate(pequis.rbegin(), pequis.rbegin() + 1, pequis.rend());
    //     for (int j = 0; j < qtdTrab; j++) {
    //         trabalhadores[j] += pequis[j];
    //     }
    // }

    // for(int i=0; i<qtdTrab; i++){
    //     if(i > 0){
    //         cout << " ";
    //     }
    //     cout << sum[i];
    // }
    // cout << endl;

    return 0;
}
