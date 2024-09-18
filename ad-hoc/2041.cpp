#include <bits/stdc++.h>

using namespace std;

string godelito(const string &seq)
{
    string resultado;
    int tam = seq.length();

    for (int i = 0; i < tam;)
    {
        char c = seq[i];
        int cont = 0;

        while (i < tam && seq[i] == c)
        {
            cont++;
            i++;
        }
        resultado += to_string(cont);
        resultado += c;
    }

    return resultado;
}

int main()
{
    int n;
    while (cin >> n)
    {
        string inicio = "3";
        for (int i = 1; i < n; ++i)
        {
            inicio = godelito(inicio);
        }

        cout << inicio << endl; 
    }

    return 0;
}
