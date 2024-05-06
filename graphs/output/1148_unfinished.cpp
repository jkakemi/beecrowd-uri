#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int numCidades, envioMsg;

    while(true){
        cin >> numCidades >> envioMsg;
        int v, u, w;
        vector<vector<pair<int, int>>> G(envioMsg);

        for(int i=0; i<envioMsg; i++){
            cin >> v >> u >> w;

            G[v].push_back(make_pair(u,w));
        }

        for (int i = 0; i < G.size(); ++i) {
        cout << "Vertice " << i << " -> ";
        for (const auto& edge : G[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }

        priority_queue<pair<int,int>> dj;
        vector<int> dist(envioMsg, INT_MAX);

        dist[0] = 0;
        dj.push({0, 0});
        // while(dj.size() > 0){
        //     int v = dj.top().second;
        //     int w = dj.top().first;

        //     dj.pop();

        //     if(w!=dist[v]) continue;

        //     for(auto edge : G[v]){
        //         int u = edge.first;
        //         int cost = edge.second;
        //         if(dist[u] > dist[v]+cost){
        //             dist[u] = dist[v] + cost;
        //             dj.push({dist[u], u});

        //         }
        //     }

        // }

        // for(int d : dist){
        //     cout << (d==INT_MAX?-1:d) << " ";
        // }
        // cout << "\n";
    }

    return 0;
}