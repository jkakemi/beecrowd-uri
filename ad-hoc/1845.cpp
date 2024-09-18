#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; // x s p z j v b
    char c;
    string letras = "xspzjvbXSPZJVB";
    string x;
    bool flag = false;
    while ((c = getchar()) != EOF)
    {
        // Se não for diferente, encontrou uma letra!
        if (letras.find(c) != string::npos)
        {
            if (!flag)
            {
                if (isupper(c))
                {
                    x += 'F';
                }
                else
                {
                    x += 'f';
                }
                flag = true;
            }
        }
        else
        {
                x += c;
                flag = false;
        }
    }

    string resultado;
    bool ultimo = false;

    for (char ch : x) {
        if (ch == 'f' || ch == 'F') {
            if (!ultimo) {
                resultado += ch;
            }
            ultimo = true;
        } else {
            resultado += ch;
            ultimo = false;
        }
    }

    cout << resultado;
    return 0;
}