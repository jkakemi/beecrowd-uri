#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    string number;
    vector<pair<char, int>> num = {
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6},
        {'0', 6}
    };

    cin >> n;
    while(n--){
        cin >> number;
        vector<char> numeros(number.begin(), number.end()); 

        int cont=0;

        for(size_t i=0; i<numeros.size(); i++){
            for(const auto& na : num){
                if(numeros[i] == na.first){
                    cont += na.second;
                }
            }
        }
        cout << cont << " leds" << endl;
    }

    return 0;
}
