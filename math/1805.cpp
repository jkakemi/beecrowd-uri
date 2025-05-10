#include <bits/stdc++.h>

using namespace std;

int main(){

    long long a, b;

    cin >> a >> b;

    unsigned long long soma=0;
    for(int i=a; i<=b; i++){
        soma+=i;
    }

    cout << soma << endl;

    return 0;
}