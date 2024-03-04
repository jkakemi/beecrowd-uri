#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, i=0, j=0;

    while(cin >> n){
        i=0;
        j=0;
        if(n == 0){
            break;
        }
        for(int x=0; x<n; x++){
            cin >> a >> b;

            if(a > b){ i++; }
            else if(b > a){ j++; }
        }
        cout << i << " " << j << endl;
    }
    return 0;
}