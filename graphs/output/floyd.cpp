#include <bits/stdc++.h>
using namespace std;

void floydWarshall(vector<vector<double>> &graph) {
    int V = graph.size();

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (graph[i][j] < graph[i][k] + graph[k][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}

int main() {
    while (true) {
        int n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) break;

        vector<vector<double>> graph(n, vector<double>(n, -INFINITY));

        for (int i = 0; i < n; i++) {
            graph[i][i] = 0;
        }

        for (int i = 0; i < m; i++) {
            int a, b, p;
            cin >> a >> b >> p;

            double prob = log(p / 100.0);  

            graph[a - 1][b - 1] = max(graph[a - 1][b - 1], prob);
            graph[b - 1][a - 1] = max(graph[b - 1][a - 1], prob);
        }

        floydWarshall(graph);

        double maxProb = graph[0][n - 1];

        if (maxProb != -INFINITY) {
            double finalProb = exp(maxProb);
            double percentage = finalProb * 100; 
            cout << fixed << setprecision(6) << percentage << endl;
        } 
    }
    
    return 0;
}
