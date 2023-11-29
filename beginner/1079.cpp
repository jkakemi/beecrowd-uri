#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i=0;
    double v1, v2, v3, media;

    cin >> n;

    while(i < n){
        cin >> v1 >> v2 >> v3;
        media = ((v1*2)+(v2*3)+(v3*5))/(10);
        cout << fixed << setprecision(1) << media << endl;
        i++;
    }
    
    return 0;
}