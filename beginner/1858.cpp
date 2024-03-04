#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0, cases;

    cin >> cases;

    vector<int> n(cases);

    for(int i=0; i<cases; i++){
        cin >> n[i];

        if(n[i] < n[x]){
            x = i;
        }
    }

    cout << x+1 << endl;

    return 0;
}
