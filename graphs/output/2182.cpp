#include <bits/stdc++.h>

using namespace std;

void dfs(int u, vector<vector<pair<int, int>>> &g, vector<bool> &visited, int &soma, set<pair<int, int>> &visited_a, int &maior_vertice){
    visited[u] = true;

    maior_vertice = max(maior_vertice, u);

    for(auto vizinho : g[u]){
        int v = vizinho.first;
        int peso = vizinho.second;

        pair<int, int> aresta = minmax(u, v);

        if(visited_a.find(aresta) == visited_a.end()){
            soma+=peso;
            visited_a.insert(aresta);
        }
        if(!visited[v]){
            dfs(v, g, visited, soma, visited_a, maior_vertice);
        }
    }
}

int main(){

    int n, m;

    cin >> n >> m;

    vector<vector<pair<int, int>>> grafo(n);
    while(m--){
        int u, v, w;

        cin >> u >> v >> w;
        u--;
        v--;
        grafo[u].push_back(make_pair(v, w));
        grafo[v].push_back(make_pair(u, w));
    }
    double menor_m = DBL_MAX;
    int melhor_comp = -1, id_c = 0;
    int casa = -1;
    
    vector<bool> visited(n, false);
    for(int i=0; i<visited.size(); i++){
        if(!visited[i]){
            set<pair<int, int>> visited_arestas;
            int soma = 0, maior_vertice = i;
            dfs(i, grafo, visited, soma, visited_arestas, maior_vertice);  

            int total_arestas = visited_arestas.size();

            double media=0.0;
            if(total_arestas > 0){
                media = soma/(double)total_arestas;
            }

            if(media < menor_m){
                menor_m = media;
                melhor_comp = id_c;
                casa = maior_vertice;
            }
            else if(abs(media - menor_m) < 1e-9){
                casa = max(casa, maior_vertice);
            }

            id_c++;
        }     
    }

    cout << casa+1 << endl;



    return 0;
}