#include <bits/stdc++.h>

using namespace std;

#define MAX 50

int main()
{
    int n, k = 1;

    while (cin >> n)
    {
        cout << "Caso " << k << ": ";

        if (n == 0)
        {
            cout << "1 numero" << endl;
            cout << "0";
        }
        else if (n == 1)
        {
            cout << "2 numeros" << endl;
            cout << "0 1";
        }
        else
        {
            int cont = 2;
            for (int i = 2; i <= n; ++i)
            {   
                for (int j = 1; j <= i; ++j)
                {
                    cont++;
                }
            }
            cout << cont << " numeros" << endl;
            cout << "0 1 ";
            for (int i = 2; i <= n; ++i)
            {
                for (int j = 1; j <= i; ++j)
                {
                    cout << i;
                    if (j < i || i < n) {
                        cout << " ";
                    }
                }
            }

        }
        cout << endl;
        cout << endl;
        k++;
    }

    return 0;
}
