#include <bits/stdc++.h>

using namespace std;

int kadaneAlg(vector<int> &lucro, int n)
{
    int max_so_far = 0, max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here += lucro[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main() {
    
    int n, custoPorDia, r;

    while(cin >> n){
        vector<int> lucro(n);
        cin >> custoPorDia;
        for(int i=0; i<n; i++){
            cin >> r;
            // receita.push_back(r);
            lucro[i] = r - custoPorDia;
        }

        int x = kadaneAlg(lucro, n);

        cout << x << endl;
    }

    return 0;
}