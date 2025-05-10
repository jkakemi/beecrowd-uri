#include <bits/stdc++.h>
using namespace std;
// CORTE DE HASTES (ROD CUTTING)
int cutRodRecur(int i, int j, vector<pair<int,int>> &canos, 
                vector<vector<int>> &memo) {
    
    if (i==0 || j==0) return 0;

    if (memo[i][j]!=-1) return memo[i][j];
    
    int take = 0;
    if (canos[i-1].first <= j) {
        take = canos[i-1].second + cutRodRecur(i, j-canos[i-1].first, canos, memo);
    }
    
    int noTake = cutRodRecur(i-1, j, canos, memo);
    
    return memo[i][j] = max(take, noTake);
}

int cutRod(vector<pair<int, int>> &canos, int tam) {
    int n = canos.size();
    vector<vector<int>> memo(n+1, vector<int>(tam+1, -1));
    
    return cutRodRecur(n, tam, canos, memo);
}

int main() {
    int cases, tam;

    cin >> cases >> tam;
    vector<pair<int, int>> canos(cases);
    for(int i=0; i<cases; i++){
        cin >> canos[i].first >> canos[i].second;
    }

    cout << cutRod(canos, tam) << endl;
    return 0;
}
