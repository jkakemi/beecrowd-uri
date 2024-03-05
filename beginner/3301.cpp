#include <bits/stdc++.h>

using namespace std;

int main() {

    int h, z, l;

    cin >> h >> z >> l;

    if((h < z && z < l) || (l < z && z < h)){
        cout << "zezinho" << endl;
    }
    else if((z < h && h < l) || (l < h && h < z)){
        cout << "huguinho" << endl;
    }
    else if((z < l && l < h) || (h < l && l < z)){
        cout << "luisinho" << endl;
    }
    return 0;
}