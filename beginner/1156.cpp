#include <bits/stdc++.h>

using namespace std;

int main() {

    double s=1.0, d=2.0;

    for(int i=3; i<=39; i+=2){
        s += i/d;
        d *= 2.0;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}