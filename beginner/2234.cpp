#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int quant, participantes;

    cin >> quant >> participantes;

    double total = (double)quant/participantes;

    cout << fixed << setprecision(2) << total << endl;   
    
    return 0;
}