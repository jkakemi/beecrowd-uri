#include <bits/stdc++.h>

using namespace std;

int lcs(const string &v1, const string &v2){
    int maximo=0;
    int m = v1.length();
    int n = v2.length();
    // int L[m + 1][n + 1];
    vector<vector<int>> L(m + 1, vector<int>(n + 1, 0));
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(v1[i-1] == v2[j-1]){
                L[i][j] = L[i-1][j-1]+1; // '\'
                if (L[i][j] > maximo) {
                    maximo = L[i][j];
                }
            }
            // PARA LCS e não LCSS
            // else{
            //     L[i][j] = max(L[i-1][j], L[i][j-1]);
            // }
        }
    }

    return maximo;
}

int main()
{

    string a, b;

    while (getline(cin, a) && getline(cin, b))
    {
        // vector<char> v1(a.begin(), a.end());
        // vector<char> v2(b.begin(), b.end());

        int x = lcs(a, b);

        cout << x << endl;
    }

    return 0;
}

// EXERCÍCIO SOBRE SUBSEQUÊNCIA COMUM CRESCENTE