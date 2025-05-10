#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;
    map<string, int> arvores;
    cin >> cases;
    cin.ignore();
    cin.ignore();
    while(cases--){
        int total=0;
        string a;
        while(true){
            getline(cin, a);
            if(a == ""){ break; }

            arvores[a] += 1;
            total++;
        }

        map<string, int>::iterator it;

        for(it = arvores.begin(); it != arvores.end(); it++){
            cout << it->first << " " << fixed << setprecision(4) << (double)(it->second*100)/total << endl;
        }
        arvores.clear();

        if (cases > 0) {
            cout << endl;
        }
    }

    return 0;
}
