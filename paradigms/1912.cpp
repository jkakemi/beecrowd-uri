#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double buscaBinaria(vector<int> &v, double inicio, double fim, int a, int n)
{
    double meio = 0;
    while (abs(fim - inicio) > 1e-7) {
        meio = (inicio + fim) / 2.0;
        double area = 0;
        for (int i = 0; i < n; ++i) {
            if ((double)v[i] > meio) {
                area += (double)v[i] - meio;
            }
        }
        if (abs(area - (double)a) < 1e-6) {
            return meio;
        } else if (area > (double)a) {
            inicio = meio;
        } else {
            fim = meio;
        }
    }
    return meio;
}

int main()
{

    int n, a, c;
    double soma = 0.0;
    vector<int> v;

    while (cin >> n >> a && n != 0 && a != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            v.push_back(c);

            soma += v[i];
        }

        if (soma == a)
        {
            cout << ":D" << endl;
        }
        else if (soma < a)
        {
            cout << "-.-" << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            double maior = v.back();

            cout << fixed << setprecision(4) << buscaBinaria(v, 0, maior, a, n) << endl;

        }
        soma = 0;
        v.clear();
    }

    return 0;
}
