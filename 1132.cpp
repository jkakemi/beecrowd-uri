#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, soma=0;

    cin >> x >> y;

    if(x < y){
        for(int i=x; i<=y; i++){
            if(i%13 != 0){
                soma += i;
            }
        }
    }
    else{
        for(int i=y; i<=x; i++){
            if(i%13 != 0){
                soma += i;
            }
        }
    }

    cout << soma << endl;

    return 0;
}
