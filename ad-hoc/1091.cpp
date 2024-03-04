#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int k, x, y, m, n;

    cin >> k;

    while(k != 0){
        cin >> n >> m;
        for(int i=0; i<k; i++){
            cin >> x >> y;

            if(n == x || m == y){ cout << "divisa" << endl; }
            else if(x > n && y > m){ cout << "NE" << endl; }
            else if(x < n && y < m){ cout << "SO" << endl; }
            else if(x > n && y < m){ cout << "SE" << endl; }
            else if(x < n && y > m){ cout << "NO" << endl; }
        }

        cin >> k;
    }

    return 0;
}