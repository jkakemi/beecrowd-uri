#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010

int grau[MAXN];
vector<int> adj[MAXN];

vector<int> ordenacaoTopologica(int n){
    vector<int> l;
    // Coloca os menores valores para ser retirado
    // antes que os maiores
    priority_queue<int, vector<int>, greater<int>> s;

    for(int i=0; i<n; i++){
        if(grau[i] == 0){
            s.push(i);
        }
    }

    while(!s.empty()){
        // Pega o menor valor possível que tem grau de independência
        // == 0
        int vertice = s.top();
        s.pop();

        l.push_back(vertice);
        // Retorna todas as adj do vértice "vertice"
        for(int w : adj[vertice]){
            grau[w]--;
            if(grau[w] == 0){
                s.push(w);
            }
        }
    }

    return l;
}

int main(){

    int n, m;
    cin >> n >> m;

    int u, v;
    while(m--){
        cin >> u >> v;

        grau[v]++; // Aumenta o grau do vértice recebendo aresta do primeiro vértice
        adj[u].push_back(v);
    }

    vector<int> resp = ordenacaoTopologica(n);

    if(resp.size() != n){
        cout << "Nao Bolada" << endl;
    }
    else{
        cout << "Bolada" << endl;
    }

    return 0;
}