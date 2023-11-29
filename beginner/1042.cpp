#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z, a, b, c;
    int aux;

    cin >> x >> y >> z;

    a = x;
    b = y;
    c = z;

    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    if(y > z){
        aux = y;
        y = z;
        z = aux;
    }
    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}