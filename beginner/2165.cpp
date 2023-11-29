#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string frase;

    getline(cin, frase);

    if(frase.length() > 140){
        cout << "MUTE" << endl;
        //cout << frase.length() << endl;
    }
    else{
        cout << "TWEET" << endl;
        //cout << frase.length() << endl;
    }


    return 0;
}
