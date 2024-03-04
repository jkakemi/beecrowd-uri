#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, num;
    vector<int> x;
    map<int, int> f;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num;

        x.push_back(num);

        f[x[i]]++;
    }

    for (auto i = f.begin(); i != f.end(); i++) { // utilizar o auto pois estamos iterando sobre um interador que é um par de inteiros, um mapa, não apenas um inteiro.
    cout << i->first << " aparece " << i->second << " vez(es)" << endl;
}

    return 0;
}

// f.begin() retorna um iterador para o primeiro elemento do mapa.
// f.end() retorna um iterador para o último elemento do mapa.
// it->first acessa a chave do elemento atual do mapa.
// it->second acessa o valor correspondente ao elemento atual do mapa.