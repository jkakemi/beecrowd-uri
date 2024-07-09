#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while(cin >> n && n!=0){
        int mat[n][n];

        int camada = (n+1)/2;

        for(int i=0; i<camada; i++){
            int v = i+1;
            for(int j=i; j<n-i; j++){
                mat[i][j] = v;
                mat[n-i-1][j] = v;
                mat[j][i] = v;
                mat[j][n-i-1] = v;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j == 0) 
                    cout << setw(3) << mat[i][j];
                else 
                    cout << " " << setw(3) << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}