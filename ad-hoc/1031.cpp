#include <bits/stdc++.h>

using namespace std;

int Josephus(int N, int k)
{
    int ans = 0;

    for (int i = 1; i <= N; i++) {
        ans = (ans + k) % i;
    }
    return ans + 1;
}

int main(){

    int n, m;
    vector<int> regioes;
    int alvo=13;
    while (cin >> n && n != 0) {
        m=1;
        while(Josephus(n, m) != alvo){
            m++;
        }
        cout << m << endl;
    }

    return 0;
}