#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a;
    vector<int> qtdAndar;

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        qtdAndar.push_back(a);
    }

    vector<int> total(3);
    total[0] = ((qtdAndar[0] * 4) + (qtdAndar[1] * 2));
    total[1] = ((qtdAndar[0] * 2) + (qtdAndar[2] * 2));
    total[2] = ((qtdAndar[1] * 2) + (qtdAndar[2] * 4));

    sort(total.begin(), total.end());

    cout << total[0] << endl;

    return 0;
}