#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, min1, min2;

    cin >> n;

    cin >> min1 >> min2;

    int result = min1 + min2;

    if(result > n){
        cout << "Deixa para amanha!" << endl;
    }
    else{
        cout << "Farei hoje!" << endl;
    }
    
    return 0;
}