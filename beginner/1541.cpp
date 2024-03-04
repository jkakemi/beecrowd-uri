#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    double x;

    while(cin >> a && a != 0){
        cin >> b >> c;
        double p = c/100.0;
        x = (a*b)/p;
        int k = sqrt(x);
        cout << trunc(k) << endl;
    }
    return 0;
}
