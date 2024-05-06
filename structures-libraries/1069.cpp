#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases, cont=0;
    string dima;
    vector<char> diamantes;

    cin >> cases;

    while(cases--){
        
        cin >> dima;

        size_t pos;
        while((pos = dima.find('.')) != string::npos){
            dima.erase(pos, 1);
        }

        //cout << dima << endl;

        size_t pos2;
        while((pos2 = dima.find("<>")) != string::npos){
            dima.erase(pos2, 2);
            // cout << dima << endl;
            cont++;
        }

        cout << cont << endl;
        cont=0;
    }

    return 0;
}