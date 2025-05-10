#include <bits/stdc++.h>
using namespace std;

// Função para ordenar os elementos do vetor pelo segundo elemento dos pares
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) {
    return (a.second < b.second);  // Ordenando pelo final dos intervalos
}

// Função para encontrar o conjunto disjunto máximo e somar os minutos
void maxDisjointIntervals(vector<pair<int, int>> list) {
    // Ordena a lista de intervalos pelo fim
    sort(list.begin(), list.end(), sortbysec);

    // Variáveis para armazenar a soma dos minutos e o ponto final do último intervalo incluído
    int totalMinutes = 0;
    int lastEnd = -1;

    for (const auto& interval : list) {
        int l1 = interval.first;
        int r2 = interval.second;

        // Se o intervalo atual não se sobrepõe ao último intervalo incluído
        if (l1 > lastEnd) {
            totalMinutes += (r2 - l1);  // Soma o intervalo inteiro
            lastEnd = r2;  // Atualiza o final do último intervalo
        }
        // Se o intervalo atual se sobrepõe parcialmente, só soma a parte que não se sobrepôs
        else if (r2 > lastEnd) {
            totalMinutes += (r2 - lastEnd);
            lastEnd = r2;  // Atualiza o final do último intervalo
        }
    }

    // Imprime a soma dos minutos dos intervalos escolhidos
    cout << "Soma dos minutos dos intervalos escolhidos: " << totalMinutes << endl;
}

// Código principal
int main() {
    int N;
    cout << "Digite o número de intervalos: ";
    cin >> N;  // Lê o número de intervalos

    vector<pair<int, int>> intervals(N);

    cout << "Digite os intervalos (formato: inicio fim):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> intervals[i].first >> intervals[i].second;  // Lê cada par de inteiros
    }

    maxDisjointIntervals(intervals);

    return 0;
}