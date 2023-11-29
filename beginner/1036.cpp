#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, delta;

    cin >> a >> b >> c;
    delta = pow(b,2)-4*a*c;
    
    if(a == 0 || delta < 0){
        cout << "Impossivel calcular" << endl;
    }
    else{
        double r1, r2;
        r1 = (-b+sqrt(delta))/(2*a);
        r2 = (-b-sqrt(delta))/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    } 

    return 0;
}