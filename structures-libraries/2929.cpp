#include <bits/stdc++.h>

using namespace std;

int main(){

    stack<int> pilha;
    stack<int> minPilha;
    //vector<int> aux;

    int n;

    cin >> n;
    cin.ignore();

    while(n--){
        string comando;

        getline(cin, comando);

        size_t pos = comando.find_last_of(' ');
        if(comando.find("PUSH") != string::npos && pos != string::npos){
            string num = comando.substr(pos + 1);
            pilha.push(stoi(num));

            int numero = stoi(num);
            if(minPilha.empty() || numero <= minPilha.top()){
                minPilha.push(numero);
            }
            //aux.push_back(stoi(num));
            //cout << "ENTROU PUSH" << endl;
            //cout << "ARMAZENOU O NUMERO " << num << endl;
        }
        else if(comando == "POP" && !pilha.empty()){
            if (pilha.top() == minPilha.top()) {
                minPilha.pop();
            }
            // auto it = find(aux.begin(), aux.end(), pilha.top());
            // if (it != aux.end()) {
            //     aux.erase(it);
            // }
            pilha.pop();
            //cout << "ENTROU POP" << endl;
        }
        else if(comando == "MIN" && !pilha.empty()){
            if (!minPilha.empty()) {
                cout << minPilha.top() << endl;
            }
        }
        else if(pilha.empty()){
            cout << "EMPTY" << endl;
        }
    }

    return 0;
}