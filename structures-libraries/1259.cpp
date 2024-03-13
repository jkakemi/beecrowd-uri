#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, k, p=0, im=0;
    vector<int> par, impar;

    cin >> n;
    while (n--)
    {
        cin >> k;

        if (k % 2 == 0)
        {
            par.push_back(k);
            p++;
        }
        else
        {
            impar.push_back(k);
            im++;
        }
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());

    for(int i=0; i<p; i++){
            cout << par[i] << endl;
    }

    for (int i = 0; i < im; i++)
    {
        cout << impar[i] << endl;
    }

    return 0;
}