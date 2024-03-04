#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r;

    while(cin >> l >> r){
        if(l == 0 && r == 0){
            break;
        }

        int x = l + r;

        cout << x << endl;
    }
    return 0;
}