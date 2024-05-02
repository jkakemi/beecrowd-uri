#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, horas;
    int sumbon = 0, sumarq = 0, summus = 0, sumdes = 0;
    string grupo, nome;
    vector<pair<string, int>> elfo;

    cin >> cases;

    while (cases--)
    {
        cin >> nome >> grupo >> horas;

        elfo.push_back(make_pair(grupo, horas));
    }

    for (int i = 0; i < elfo.size(); i++)
    {
        if (elfo[i].first == "bonecos")
        {
            sumbon += elfo[i].second;
        }
        else if (elfo[i].first == "arquitetos")
        {
            sumarq += elfo[i].second;
        }
        else if (elfo[i].first == "musicos")
        {
            summus += elfo[i].second;
        }
        else if (elfo[i].first == "desenhistas")
        {
            sumdes += elfo[i].second;
        }
    }

    cout << (sumbon / 8) + (sumarq / 4) + (summus / 6) + (sumdes / 12) << endl;

    return 0;
}