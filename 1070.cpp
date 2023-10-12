#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, i=0;

    cin >> x;

    while(i < 12){
        if(x%2 != 0){
            cout << x << endl;
            x++;
        }
        else{
            x++;
        }
        i++;
    }

    return 0;
}