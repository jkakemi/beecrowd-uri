#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    char sep;

    while(cin >> h >> sep >> m){
        if(h >= 5 && h <= 6){
        cout << "Atraso maximo: " << 0 << endl;
        }
        else if(h == 7){
            cout << "Atraso maximo: " << m << endl;
        }
        else if(h == 8){
            cout << "Atraso maximo: " << 60+m << endl;
        }
        else if(h == 9){
            cout << "Atraso maximo: " << 120+m << endl;
        }
    }

    return 0;
}
