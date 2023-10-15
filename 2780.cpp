#include <bits/stdc++.h>

using namespace std;

int main(){

    int d, cont=0;

    cin >> d;

    if(d <= 800){
        cont+=1;
    }
    if(d > 800 && d <= 1400){
        cont+=2;
    }
    if(d > 1400 && d <= 2000){
        cont+=3;
    }

    cout << cont << endl;

    return 0;
}
