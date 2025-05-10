#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int total=a+b;
    int bebidos=0;
    while(total >= c){
        int novo = total/c;
        bebidos += novo;
        total = total - (novo*c)+novo;
    }

    cout << bebidos << endl;

    return 0;
}