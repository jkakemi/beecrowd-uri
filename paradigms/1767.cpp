#include <bits/stdc++.h>

using namespace std;

#define MAX 50

int main()
{
    int cases, n, peso, valor, ptotal = 0, maximo = MAX, cont=0;
    vector<pair<int, int>> peso_valor;

    cin >> cases;
    while (cases--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> valor >> peso;
            peso_valor.push_back(make_pair(valor, peso));
        }

        int mat[n + 1][MAX + 1];
        bool pegou[n + 1][MAX + 1] = {false};

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= MAX; j++)
            {
                if (i == 0 || j == 0)
                {
                    mat[i][j] = 0;
                }
                else if (peso_valor[i - 1].second > j)
                {
                    mat[i][j] = mat[i - 1][j];
                    pegou[i][j] = false;
                }
                else
                {
                    int antigo = mat[i - 1][j];
                    int atual = mat[i][j] = max(mat[i - 1][j], peso_valor[i - 1].first + mat[i - 1][j - peso_valor[i - 1].second]);

                    if (atual > antigo)
                    {
                        mat[i][j] = atual;
                        pegou[i][j] = true;
                    }
                    else
                    {
                        mat[i][j] = antigo;
                        pegou[i][j] = false;
                    }
                }
            }
        }

        for (int i = n; i > 0 && maximo > 0; i--)
        {
            if (pegou[i][maximo])
            {
                ptotal += peso_valor[i - 1].second;
                maximo -= peso_valor[i - 1].second;
                cont++;
            }
        }

        cout << mat[n][MAX] << " brinquedos" << endl;
        cout << "Peso: " << ptotal << " kg" << endl;
        cout << "sobra(m) " << n - cont << " pacote(s)" << endl << endl;

        peso_valor.clear();
        ptotal = 0;
        maximo = MAX;
        cont=0;
    }

    return 0;
}