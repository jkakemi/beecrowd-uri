#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;

    while(cases--){
        int min;
        string tempo;

        cin >> min >> tempo;

        if(tempo == "1T" && min <= 45){
            cout << min << endl;
        }
        else if(tempo == "1T" && min > 45){
            int aux;
            aux = min - 45;
            cout << "45+" << aux << endl;
        }
        else if(tempo == "2T" && min+45 <= 90){
            cout << min+45 << endl;
        }
        else if(tempo == "2T" && min+45 > 90){
            int aux;
            aux = min - 45;
            cout << "90+" << aux << endl;
        }
    }

    return 0;
}