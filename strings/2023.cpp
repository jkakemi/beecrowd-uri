#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    vector<pair<string, string>> names; // Armazena a string original e sua versão em minúsculas

    while (getline(cin, nome)) {
        string original = nome; // Cria cópia da string original
        transform(nome.begin(), nome.end(), nome.begin(), ::tolower);
        names.push_back(make_pair(original, nome));
    }

    sort(names.begin(), names.end(), [](const pair<string, string>& a, const pair<string, string>& b) {
        return a.second < b.second; // Ordena pelas versões em minúsculas das strings
    });

    string ultimo = names.back().first; // Recupera a string original da última posição

    cout << ultimo << endl;

    return 0;
}