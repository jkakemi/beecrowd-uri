#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, cont = 0;

    while(cin >> n >> m && n != 0 && m != 0) {
        unordered_map<string, set<int>> servidores;
        vector<set<string>> clientes(m);

        for(int i = 0; i < n; i++) {
            string app;
            int qi;
            cin >> qi;
            for(int j = 0; j < qi; j++) {
                cin >> app;
                servidores[app].insert(i);
            }
        }

        for(int i = 0; i < m; i++) {
            string app;
            int pj;
            cin >> pj;
            for(int j = 0; j < pj; j++) {
                cin >> app;
                clientes[i].insert(app);
            }
        }

        for(int i = 0; i < m; i++) {
            set<int> conexoes;
            for(const string& app : clientes[i]) {
                if(servidores.count(app) > 0) {
                    conexoes.insert(servidores[app].begin(), servidores[app].end());
                }
            }
            cont += conexoes.size();
        }
        cout << cont << endl;
        cont = 0;
    }

    return 0;
}
