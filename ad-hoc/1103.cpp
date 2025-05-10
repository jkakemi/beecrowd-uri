#include <bits/stdc++.h>

using namespace std;

int main(){

    int h1, m1, h2, m2;

    while(cin >> h1 >> m1 >> h2 >> m2){
        if(h1 == 0 && m1 == 0 && m1 == 0 && m2 == 0){
            break;
        }

        int t1 = h1 * 60 +m1, t2 = h2 * 60 +m2;

        int diff = t2 - t1;

        if(diff < 0){
            diff += 24*60;
        }

        cout << diff << endl;
    }



    return 0;
}