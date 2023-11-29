#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    double soma=0.0, mat[12][12];
    char t;

    cin >> n;
    cin >> t;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> mat[i][j];
            if(j == n){
                soma += mat[i][j];
            }
        }
    }

    if(t == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    }
    else{
        cout << fixed << setprecision(1) << soma/12.0 << endl;
    }

    return 0;
}