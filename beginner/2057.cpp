#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, t, f, st, stf;

    cin >> s >> t >> f;

    st=s+t;

    if(st > 23){
        st = st - 24;
    }
    stf = st + f;
    if(stf < 0){
        stf = stf + 24;
    }
    cout << stf << endl;

    return 0;
}
