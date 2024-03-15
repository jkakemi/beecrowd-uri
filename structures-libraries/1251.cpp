#include <bits/stdc++.h>

using namespace std;

int main() {
    string sequence;
    map<char, int> cont;
    int i=0;

    while (cin >> sequence) {
        cont.clear();
        if(i){
            cout << endl;
        }
        for (char c : sequence) {
            if (c >= 32 && c <= 127) {
                cont[c]++;
            }
        }
        
        vector<pair<int, int>> vec(cont.begin(), cont.end());

        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        for (const auto& par : vec) {
            int c = par.first;
            cout << c << " " << par.second << endl;
        }
        i=1;
    }

    return 0;
}