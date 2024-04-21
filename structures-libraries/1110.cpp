#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    vector<int> pilha;
    vector<int> discard_cards;

    while(cin >> n && n != 0){
        for(int i=1; i<=n; i++){
            pilha.push_back(i);
        }

        while(!pilha.empty() && pilha.size() > 1){
            discard_cards.push_back(pilha.front());
            pilha.erase(pilha.begin());
            int prox = pilha.front();
            pilha.push_back(prox);
            pilha.erase(pilha.begin());
        }

        cout << "Discarded cards: ";
        int ultimo = 1;
        for(const auto& d : discard_cards){
            if(!ultimo){
                cout << ", ";
            }
            cout << d;
            ultimo = 0;
        }
        cout << endl;

        cout << "Remaining card: " << pilha.back() << endl;

        pilha.clear();
        discard_cards.clear();
    }
    
    return 0;
}