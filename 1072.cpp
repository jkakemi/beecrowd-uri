#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int i=0, x, y, cont=0, cont2=0;
    
    cin >> x;
    
    while(i < x){
        cin >> y;
        if(y >= 10 && y <= 20){
            cont++;
        }
        else{
            cont2++;
        }
        i++;
    }

    cout << cont << " in" << endl;
    cout << cont2 << " out" << endl;

    return 0;
}