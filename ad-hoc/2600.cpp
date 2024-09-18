#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

#define IOFAST()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s) & (-s)) // LASTBIT
#define DEG_to_RAD(X) (X * PI / 180)
#define F first
#define S second
#define PI 2 * acos(0)
int main()
{

    vector<int> dado;
    int numeros;
    int cases;

    cin >> cases;

    while (cases--)
    {
        int flag = 0;

        for (int i = 0; i < 6; i++)
        {
            cin >> numeros;
            dado.pb(numeros);
        }

        unordered_set<int> repetido;
        for (const auto &c : dado)
        {
            if (repetido.find(c) != repetido.end() || c < 1|| c > 6)
            {
                cout << "NAO" << endl;
                flag = 1;
                break;
            }
            else
            {
                repetido.insert(c);
            }
        }

        if(flag == 0){
            if ((dado[0] + dado[5] == 7) && (dado[1] + dado[3] == 7) && (dado[2] + dado[4] == 7))
            {
                cout << "SIM" << endl;
            }
            else{
                cout << "NAO" << endl;
            }
        }

        dado.clear();
        repetido.clear();
    }

    return 0;
}