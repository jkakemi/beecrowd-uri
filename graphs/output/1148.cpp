#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;

class Graph {
    int V;
    list<iPair> *adj;

public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    int shortestPath(int x, int y);
    bool hasEdge(int u, int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<iPair>[V];
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
}

bool Graph::hasEdge(int u, int v) {
    for (auto &neighbor : adj[u]) {
        if (neighbor.first == v) {
            return true;
        }
    }
    return false;
}

int Graph::shortestPath(int x, int y) {
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    vector<int> dist(V, INF);

    pq.push(make_pair(0, x));
    dist[x] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto &neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    return dist[y];
}

int main() {
    int V, E;
    
    while (true) {
        cin >> V >> E;
        if (V == 0 && E == 0) break;

        Graph g(V);

        for (int i = 0; i < E; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            u--; v--;
            g.addEdge(u, v, w);
            if (g.hasEdge(v, u)) {
                g.addEdge(u, v, 0);
                g.addEdge(v, u, 0);
            }
        }

        int k;
        cin >> k;

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            int resposta = g.shortestPath(x - 1, y - 1);
            if (resposta != INF) {
                cout << resposta << endl;
            } else {
                cout << "Nao e possivel entregar a carta" << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
