#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<string, double>> produtos;
    vector<pair<string, int>> comprar;
    int m, p, n, qte;
    double valor, result=0.0;
    string nome, nomecomprar;

    cin >> n;

    while(n--){
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> nome >> valor;

            produtos.push_back(make_pair(nome, valor));
        }
        cin >> p;
        for(int i=0; i<p; i++){
            cin >> nomecomprar >> qte;

            comprar.push_back(make_pair(nomecomprar, qte));
        }

        for(int i=0; i<produtos.size(); i++){
            for(int j=0; j<comprar.size(); j++){
                if(produtos[i].first == comprar[j].first){
                    result += produtos[i].second * comprar[j].second;
                }
            }
        }

        cout << "R$ " << fixed << setprecision(2) << result << endl;
        result = 0.0;
        produtos.clear();
        comprar.clear();
    }

    return 0;
}