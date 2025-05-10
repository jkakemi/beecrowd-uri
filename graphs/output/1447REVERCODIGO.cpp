#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, rev, capacity, cost;
};

const int INF = 1e9;
int n;

vector<vector<Edge>> graph;
vector<int> dist, potential, prevnode, prevedge;

void add_edge(int u, int v, int capacity, int cost) {
    graph[u].push_back({v, (int)graph[v].size(), capacity, cost});
    graph[v].push_back({u, (int)graph[u].size() - 1, 0, -cost});
}

bool dijkstra(int s, int t) {
    dist.assign(n, INF);
    dist[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        pair<int, int> top = pq.top(); pq.pop();
        int d = top.first;
        int u = top.second;
        if (d != dist[u]) continue;
    

        for (int i = 0; i < graph[u].size(); i++) {
            Edge &e = graph[u][i];
            if (e.capacity > 0) {
                int new_dist = dist[u] + e.cost + potential[u] - potential[e.to];
                if (dist[e.to] > new_dist) {
                    dist[e.to] = new_dist;
                    prevnode[e.to] = u;
                    prevedge[e.to] = i;
                    pq.push({new_dist, e.to});
                }
            }
        }
    }

    return dist[t] != INF;
}

int min_cost_flow(int s, int t, int max_flow) {
    potential.assign(n, 0);
    prevnode.assign(n, -1);
    prevedge.assign(n, -1);

    int flow = 0, cost = 0;
    while (flow < max_flow && dijkstra(s, t)) {
        for (int i = 0; i < n; i++)
            if (dist[i] < INF)
                potential[i] += dist[i];

        int f = max_flow - flow;
        for (int v = t; v != s; v = prevnode[v])
            f = min(f, graph[prevnode[v]][prevedge[v]].capacity);

        for (int v = t; v != s; v = prevnode[v]) {
            Edge &e = graph[prevnode[v]][prevedge[v]];
            e.capacity -= f;
            graph[v][e.rev].capacity += f;
            cost += e.cost * f;
        }

        flow += f;
    }

    return (flow == max_flow) ? cost : -1;
}

int main() {
    int instancia = 1;
    int N, M;
    while (cin >> N >> M) {
        n = N + 1;
        graph.assign(n, vector<Edge>());

        vector<tuple<int, int, int>> entradas;
        for (int i = 0; i < M; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            entradas.emplace_back(u, v, w);
        }

        int D, K;
        cin >> D >> K;

        for (int i = 0; i < entradas.size(); i++) {
            int u = get<0>(entradas[i]);
            int v = get<1>(entradas[i]);
            int w = get<2>(entradas[i]);
            add_edge(u, v, K, w);
            add_edge(v, u, K, w);
        }
        

        int resultado = min_cost_flow(1, N, D);
        cout << "Instancia " << instancia++ << endl;
        if (resultado == -1)
            cout << "impossivel" << endl;
        else
            cout << resultado << endl;
        cout << endl;
    }
    return 0;
}
