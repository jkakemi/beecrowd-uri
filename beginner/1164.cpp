#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, p, soma = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        soma = 0;
        for (int j = 1; j < p; j++)
        {
            if (p % j == 0)
            {
                soma += j;
            }
        }
        if (soma == p)
        {
            cout << p << " eh perfeito" << endl;
        }
        else
        {
            cout << p << " nao eh perfeito" << endl;
        }
    }

    return 0;
}