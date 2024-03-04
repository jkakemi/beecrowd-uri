#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b){
        cout << "S" << endl;
    }
    else if(a == c){
        cout << "S" << endl;
    }
    else if(b == c){
        cout << "S" << endl;
    }
    else if((a+b)-c == 0){
        cout << "S" << endl;
    }
    else if((c+b)-a == 0){
        cout << "S" << endl;
    }
    else if((a+c)-b == 0){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}
