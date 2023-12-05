#include <bits/stdc++.h>

using namespace std;

int main(){

    int l, c;

    cin >> l;
    cin >> c;

    int s = l + c;

    if(s%2==0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }

    return 0;
}