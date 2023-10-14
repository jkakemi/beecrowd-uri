#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, n;

    cin >> t;
    n=0;
    for(int i=0; i<1000; i++){
        cout << "N[" << i << "] = " << n << endl;
        n++;
        if(n == t){
            n = 0;
        }
    }

    return 0;
}