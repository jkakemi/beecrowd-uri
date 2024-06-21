#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int u, v, custo, n, m;

    while(cin >> n >> m && n != 0){
        
        vector<vector<pair<int, int>>> G(n);
        for(int i=0; i<m; i++){
            cin >> u >> v >> custo;
            G[u].push_back({v, custo});
            G[v].push_back({u, custo});
        }

        priority_queue<pair<int, int>> prim;
        vector<bool> visited(n, false);

        visited[0] = true;
        for(pair<int, int> ed : G[0]){
            // Menor positivo
            prim.push({-ed.second, ed.first});
        }

        int soma = 0;
        while(!prim.empty()){
            pair<int, int> menor = prim.top();
            prim.pop();

            if(visited[menor.second] == true){
                continue;
            }
            soma += -menor.first;

            visited[menor.second] = true;
            for(pair<int, int> ed : G[menor.second]){
                prim.push({-ed.second, ed.first});
            }
        }
        cout << soma << endl;
    }

    return 0;
}