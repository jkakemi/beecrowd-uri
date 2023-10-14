#include <bits/stdc++.h>

using namespace std;

int main()
{

    string nome;

    getline(cin, nome);

    if(nome.length() > 80){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}