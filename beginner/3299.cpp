#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long int n;

    cin >> n;

    string num = to_string(n);

    if(num.find("13") != string::npos){
        cout << n << " es de Mala Suerte" << endl;
    }
    else{
        cout << n << " NO es de Mala Suerte" << endl;
    }

    return 0;
}