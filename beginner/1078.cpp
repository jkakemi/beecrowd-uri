#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i=1;

    cin >> n;

    while(i <= 10){
        cout << i << " x " << n << " = " << n*i << endl;
        i++;
    }
    
    return 0;
}