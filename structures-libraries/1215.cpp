#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    string temp;
    set<string> palavras;

    while (cin.get(c)) {
        if (isalpha(c)) {
            temp += tolower(c);
        } else {
            if (!temp.empty()) {
                palavras.insert(temp);
                temp.clear();
            }
        }
    }
    if (!temp.empty()) {
        palavras.insert(temp);
        temp.clear();
    }

    for (const auto& palavra : palavras) {
        cout << palavra << endl;
    }

    return 0;
}