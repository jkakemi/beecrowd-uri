#include <bits/stdc++.h>

using namespace std;

void dfsr(int v, vector<bool> &visited, vector<vector<int>> &grafo, int prof){
    visited[v] = true;

    for(int u : grafo[v]){
        for(int i=0; i<prof; i++){ 
            cout << ' '; 
        }
        cout << v << "-" << u;
        if(!visited[u]){  
            cout << " pathR(G," << u << ")\n";
            dfsr(u, visited, grafo, prof + 2); 
        }
        else{
            cout << '\n';
        }
    }
}

int main(){
    int cases;
    cin >> cases;
    int x = 0;
    while(cases--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grafo(n);
        vector<bool> visited(n, false);

        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            grafo[u].push_back(v);
        }

        for(int i = 0; i < n; i++){
            sort(grafo[i].begin(), grafo[i].end());
        }

        cout << "Caso " << x + 1 << ":\n";
        for (int i = 0; i < n; i++) {
            if(!visited[i] && !grafo[i].empty()){
                dfsr(i, visited, grafo, 2);
                cout << '\n';
            }
        }

        x++;
    }

    return 0;
}
