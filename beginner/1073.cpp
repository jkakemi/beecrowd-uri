#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i = 1, x, pot;

    cin >> x;

    if (x > 5 && x < 2000)
    {
        while (i <= x)
        {
            if (i % 2 == 0)
            {
                pot = i * i;
                cout << i << "^2" << " = " << pot << endl;
            }
            i++;
        }
    }

    return 0;
}