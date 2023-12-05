#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, op1, op2;

    cin >> n;

    while(n--){
        cin >> op1 >> op2;

        int result = op1 + op2;

        if(result == 0){
            cout << "PROXYCITY" << endl;
        }
        else if(result == 1){
            cout << "P.Y.N.G." << endl;
        }
        else if(result == 2){
            cout << "DNSUEY!" << endl;
        }
        else if(result == 3){
            cout << "SERVERS" << endl;
        }
        else if(result == 4){
            cout << "HOST!" << endl;
        }
        else if(result == 5){
            cout << "CRIPTONIZE" << endl;
        }
        else if(result == 6){
            cout << "OFFLINE DAY" << endl;
        }
        else if(result == 7){
            cout << "SALT" << endl;
        }
        else if(result == 8){
            cout << "ANSWER!" << endl;
        }
        else if(result == 9){
            cout << "RAR?" << endl;
        }
        else if(result == 10){
            cout << "WIFI ANTENNAS" << endl;
        }
    }
    
    return 0;
}