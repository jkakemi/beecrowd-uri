#include <bits/stdc++.h>

using namespace std;

int main(){

    int maxCap, m;
    int cases=1;
    while(cin >> maxCap >> m){
        if(maxCap == 0 && m == 0){
            break;
        }
        vector<pair<int, int>> peso_valor(m);
        //int i=0;
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            peso_valor[i] = make_pair(x, y);
        }

        vector<vector<int>> mat(m + 1, vector<int>(maxCap + 1, 0));

        for (int i = 0; i <= m; i++) {
            //cout << "ENTROU AQUI";
            for (int j = 0; j <= maxCap; j++) {
                if (i == 0 || j == 0){
                    mat[i][j] = 0;
                }
                else if (peso_valor[i - 1].first > j){
                    mat[i][j] = mat[i - 1][j];
                }
                else{
                    mat[i][j] = max(mat[i - 1][j], peso_valor[i - 1].second + mat[i - 1][j - peso_valor[i - 1].first]);
                }
            }
        }

        cout << "Teste " << cases++ << endl; 
        cout << mat[m][maxCap] << endl << endl;
        
        peso_valor.clear();
    }

    return 0;
}
