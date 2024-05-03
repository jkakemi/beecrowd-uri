#include <bits/stdc++.h>

using namespace std;

int main()
{
    string frase;
    int cases;

    cin >> cases;
    cin.ignore();

    while (cases--)
    {
        getline(cin, frase);

        // stringstream é uma biblioteca que divide a frase em palavras automaticamente!
        stringstream ss(frase);
        string palavra;
        // Aqui extrai cada palavra
        while (ss >> palavra)
        {
            if (palavra[0] != ' ')
            {
                cout << palavra[0];
            }
        }
        cout << endl;
    }

    return 0;
}