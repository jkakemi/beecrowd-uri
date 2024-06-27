#include <bits/stdc++.h>

using namespace std;

int main()
{

    int cases, n1, n2, resultado;
    string op, igual;
    // vector<int> total;

    cin >> cases;

    while (cases--)
    {
        cin >> n1 >> op >> n2 >> igual >> resultado;
        int aux;
        if (op == "+")
        {
            aux = n1 + n2;
            aux -= resultado;
            // cout << aux << endl;
        }
        else if (op == "-")
        {
            aux = n1 - n2;
            aux -= resultado;
            // cout << aux << endl;
        }
        else if (op == "x")
        {
            aux = n1 * n2;
            aux -= resultado;
            // cout << aux << endl;
        }
        // total.push_back(aux);
        cout << "E";
        for (int i = 0; i < abs(aux); i++)
        {
            cout << "r";
        }
        cout << "ou!" << endl;
    }
    // cout << "E";
    // for(int i=0; i<aux; i++){
    //     cout << "r";
    // }
    // cout << "ou!" << endl;

    return 0;
}