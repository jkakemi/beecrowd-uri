#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;

    while(cases--){
        double a, b, c;

        cin >> a >> b >> c;

        double delta = (pow(b, 2))-4*a*c;
        double vy = delta/(-4*a);

        cout << fixed << setprecision(2) << (double)vy << endl;
    }

    return 0;
}