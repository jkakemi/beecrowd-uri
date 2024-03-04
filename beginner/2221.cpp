#include <bits/stdc++.h>

using namespace std;

int main() {

    int ai, di, li, ai2, di2, li2, bonus, n;
    double vg, vg2;

    cin >> n;

    while(n--){
        cin >> bonus;

        cin >> ai >> di >> li;
        cin >> ai2 >> di2 >> li2;

        vg = ((ai+di)/2.0);
        vg2 = ((ai2+di2)/2.0);

        if(li%2==0){
            vg+=bonus;
        }
        if(li2%2==0){
            vg2+=bonus;
        }

        if(vg == vg2){
            cout << "Empate" << endl;
        }
        else if(vg > vg2){
            cout << "Dabriel" << endl;
        }
        else{
            cout << "Guarte" << endl;
        }
    }
}
