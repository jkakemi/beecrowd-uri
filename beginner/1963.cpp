#include <bits/stdc++.h>

using namespace std;

int main()
{

    double a, b, total;

    cin >> a >> b;

    total = ((b*100.0)/a)-100;

    cout << fixed << setprecision(2) << total << "%" << endl;

    return 0;
}