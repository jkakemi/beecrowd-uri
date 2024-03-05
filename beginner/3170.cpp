#include <bits/stdc++.h>

using namespace std;

int main() {

    int g, x, b;

    cin >> b >> g;

    if(g%2==0){
        x = g/2;
        x -= b;
        if(x == 0 || x < 0){
            cout << "Amelia tem todas bolinhas!" << endl;
        }
        else{
            cout << "Faltam " << x << " bolinha(s)" << endl;
        }
    }
    else{
        x = g/2;
        x -= b;
        floor(x);
        if(x < 0){
            cout << "Amelia tem todas bolinhas!" << endl;
        }
        else{
            cout << "Faltam " << x << " bolinha(s)" << endl;
        }
    }

    return 0;
}