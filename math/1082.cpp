#include <bits/stdc++.h>

using namespace std;

void dfs(int vertice, vector<vector<int>>& grafo, vector<int>&visited, vector<int>& conexo){
    visited[vertice] = 1;
    conexo.push_back(vertice);
    for (int vizinho : grafo[vertice]) {
        if (visited[vizinho] == 0) {
            dfs(vizinho, grafo, visited, conexo);
        }
    }
}

int main(){

    int cases;
    int num = 1;
    cin >> cases;

    while(cases--){
        int vertice, aresta;
        
        cin >> vertice >> aresta;

        char l1, l2;
        vector<vector<int>> grafo(vertice);
        
        // for(int i=0; i<aresta; i++){
        //     cin >> l1 >> l2;

        //     grafo[l1-'a'].push_back(l2-'a');
        //     grafo[l2-'a'].push_back(l1-'a');
        // }
        while(aresta--){
            cin >> l1 >> l2;

            grafo[l1-'a'].push_back(l2-'a');
            grafo[l2-'a'].push_back(l1-'a');
        }

        vector<int> visited(vertice, 0);
        vector<vector<int>> conexos;
        int cont=0;

        for(int i=0; i<visited.size(); i++){
            if(visited[i] == 0){
                cont++;
                vector<int> conexo;
                dfs(i, grafo, visited, conexo);
                conexos.push_back(conexo);
            }
        }
        
        cout << "Case #" << num << ":" << endl;
        for(int i=0; i<conexos.size(); i++){
            sort(conexos[i].begin(), conexos[i].end());
            for(int v : conexos[i]){
                cout << char(v+'a') << ",";
            }
            cout << endl;
        }
        
        cout << cont << " connected components" << endl;
        num++;
        cout << endl;
    }
    return 0;
}