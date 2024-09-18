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

    string frase;

    while(getline(cin, frase) && frase != "*"){

        transform(frase.begin(), frase.end(), frase.begin(), ::tolower);

        char i = frase[0];
        bool flag = true;

        stringstream ss(frase);
        string p;

        while(ss >> p){
            if(p[0] != i){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    return 0;
}