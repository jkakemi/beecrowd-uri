#include <bits/stdc++.h>

using namespace std;

int main() {
    int maxCap, n, peso, valor;
    vector<pair<int, int>> peso_valor;

    while (cin >> n && n != 0) {
        cin >> maxCap;
        for (int i = 0; i < n; i++) {
            cin >> valor >> peso;
            peso_valor.push_back(make_pair(valor, peso));
            //cout << "ENTROU AQUI";
        }

        int mat[n + 1][maxCap + 1];

        for (int i = 0; i <= n; i++) {
            //cout << "ENTROU AQUI";
            for (int j = 0; j <= maxCap; j++) {
                if (i == 0 || j == 0){
                    mat[i][j] = 0;
                }
                else if (peso_valor[i - 1].second > j){
                    mat[i][j] = mat[i - 1][j];
                }
                else{
                    mat[i][j] = max(mat[i - 1][j], peso_valor[i - 1].first + mat[i - 1][j - peso_valor[i - 1].second]);
                }
            }
        }

        cout << mat[n][maxCap] << " min." << endl;
        
        peso_valor.clear();
    }

    return 0;
}