#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b;

    cin >> a >> b;

    int r = (a%b+abs(b))%abs(b);
    int q = (a-r)/b;
    
    cout << q << " " << r << endl;
    
    return 0;
}