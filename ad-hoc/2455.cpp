#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b;
    int p1, c1, p2, c2;

    cin >> p1 >> c1 >> p2 >> c2;

    a = p1*c1;
    b = p2*c2;

    if(a == b){
        cout << "0" << endl;
    }
    else if(a < b){
        cout << "1" << endl;
    }
    else{
        cout << "-1" << endl;
    }


    return 0;
}