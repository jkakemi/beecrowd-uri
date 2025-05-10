#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;
    while(cases--){
        string word;

        cin >> word;

        double len = word.length();

        cout << fixed << setprecision(2) << len/100 << endl;
    }

    return 0;
}