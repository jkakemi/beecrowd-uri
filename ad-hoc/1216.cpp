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

    vector<pair<string, double>> distancia;
    double d;
    string nome;
    double total=0, media=0.0;

    while(getline(cin, nome) && cin >> d){
        cin.ignore();
        distancia.pb(mp(nome, d));

        total += d;

        media = total/distancia.size();
    }

    cout << fixed << setprecision(1) << media << endl;
    media = 0.0;

    return 0;
}