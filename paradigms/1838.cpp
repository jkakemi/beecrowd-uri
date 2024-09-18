#include <bits/stdc++.h>
using namespace std;

// Função para ordenar os intervalos pelo tempo de término
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> requisitions(N);

    // Leitura das requisições
    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        requisitions[i] = {start, end};
    }

    // Ordena as requisições pelo tempo de término (menor para maior)
    sort(requisitions.begin(), requisitions.end(), sortbysec);

    int total_minutes = 0;
    int last_end = 0;

    // Itera pelas requisições escolhendo aquelas que não se sobrepõem
    for (const auto& req : requisitions) {
        if (req.first >= last_end) {
            total_minutes += req.second - req.first;
            last_end = req.second;
        }
    }

    // Imprime o tempo total em que a pedra filosofal estará sendo utilizada
    cout << total_minutes << endl;

    return 0;
}
