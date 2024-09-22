#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

using namespace std;

bool bfs(vector<vector<int>> &adjList, int origem, int destino)
{
    vector<bool> visited(adjList.size(), false);
    queue<int> q;

    visited[origem] = true;
    q.push(origem);

    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();

        if (currentNode == destino) {
            return true;
        }

        for (int neighbor : adjList[currentNode])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return false;
}

void addEdge(vector<vector<int>> &adjList, int v, int w, int tipoRua)
{
    adjList[v].pb(w);
    if(tipoRua == 2){
        adjList[w].pb(v);
    }
}

bool irEvir(vector<vector<int>>& adj, int v, int w) {
    return bfs(adj, v, w) && bfs(adj, w, v);
}

int main()
{   
    int numInterseccao, numRuas, tipoRua;

    cin >> numInterseccao >> numRuas;
    vector<vector<int>> adjList(numInterseccao + 1);
    int v, w;

    for (int i = 0; i < numRuas; i++)
    {
        cin >> v >> w >> tipoRua;
        addEdge(adjList, v, w, tipoRua);
    }

    for(int i = 1; i <= numInterseccao; i++){
        for(int j = 1; j <= numInterseccao; j++){
            if(i != j){
                if(irEvir(adjList, i, j)){
                    cout << "1" << endl;
                }
                else{
                    cout << "0" << endl;
                }
            }
        }
    }

    return 0;
}

// É DFSSSS
