#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

#define IOFAST()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s) & (-s)) // LASTBIT
#define DEG_to_RAD(X) (X * PI / 180)
#define F first
#define S second
#define PI 2 * acos(0)

vector<int> dijkstra(int inicio, int fim, const vector<vector<pair<int,int>>>& graph){
    int n = graph.size() - 1;
    vector<vector<int>> dist(n + 1, vector<int>(2, INF));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;

    dist[inicio][0] = 0;
    pq.push({0, {inicio, 0}});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second.first;
        int par = pq.top().second.second;
        pq.pop();

        if (d > dist[u][par]) continue;

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;
            int novo = 1 - par;
            if (dist[v][novo] > d + w) {
                dist[v][novo] = d + w;
                pq.push({dist[v][novo], {v, novo}});
            }
        }
    }

    return dist[fim];
}

int main()
{
    int vertices, arestas;
    cin >> vertices >> arestas;

    vector<vector<pair<int, int>>> graph(vertices+1);
    for (int i = 0; i < arestas; i++)
    {
        int v, u, peso;
        cin >> v >> u >> peso;
        // u--;
        // v--;
        graph[v].pb({u, peso});
        graph[u].pb({v, peso}); // Vertice, peso
    }

    vector<int> x = dijkstra(1, vertices, graph);

    if(x[0] == INF){
        cout << -1 << endl;
    }
    else{
        cout << x[0] << endl;
    }

    return 0;
}
