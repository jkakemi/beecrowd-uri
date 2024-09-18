#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector< ii > vii;
 
#define IOFAST() ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s)&(-s)) //LASTBIT
#define DEG_to_RAD(X)   (X * PI / 180)
#define F first
#define S second
#define PI 2*acos(0)
int main(){

    int n;
    vector<pair<int, char>> pares;
    while(cin >> n){
        int total=0;
        pares.clear();
        int m;
        char l;
        for(int i=0; i<n; i++){
            cin >> m >> l;
            pares.pb(mp(m, l));
        }

        sort(pares.begin(), pares.end());
        map<int, pair<int, int>> mapaPe;
        map<int, int> mapaTam;

        for(const auto& p : pares){
            if(p.second == 'E'){
                mapaPe[p.first].first++; // Incrementa o pe esquerdo
            }
            else{
                mapaPe[p.first].second++; // Incrementa o pe direito
            }

            if(mapaPe[p.first].first > 0 && mapaPe[p.first].second > 0){
                total++;
                mapaPe[p.first].first--;
                mapaPe[p.first].second--;
            }
        }

        cout << total << endl;

    }

    return 0;
}