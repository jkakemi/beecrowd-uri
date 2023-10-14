#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned int n, i;

    cin >> n;

    if(n > 1 && n < 1000){
        for(i=1; i<=n; i++){
            cout << fixed << setprecision(0);
            cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
            cout << i << " " << pow(i, 2)+1 << " " << pow(i, 3)+1 << endl;
        }
    }

    return 0;
}
