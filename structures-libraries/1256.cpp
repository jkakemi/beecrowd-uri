#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases, m, c, num;

    cin >> cases;
    bool x = false;

    while(cases--){
        if(x){
            cout << endl;
        }
        else{
            x = true;
        }

        cin >> m >> c;
        // permitir que uma chave tenha vários elementos associados a ele
        multimap<int, int> tabela;
        vector<int> modulo;
        
        for(int i=0; i<c; i++){
            cin >> num;
            modulo.push_back(num);
        }

        for(int i=0; i<c; i++){
            int mod = modulo[i] % m;

            tabela.insert(make_pair(mod, modulo[i]));
        }

        for (int i = 0; i < m; ++i) {
            // pega os elementos que tem a mesma chave para não dar sobreposição
            auto range = tabela.equal_range(i);
            cout << i << " -> ";
            if (range.first == tabela.end()) {
                cout << "\\" << endl;
            } else {
                for(auto it = range.first; it != range.second; ++it) {
                    cout << it->second << " -> ";
                }
                cout << "\\\n";
            }
        }
        // cout << endl;
    }

    return 0;
}