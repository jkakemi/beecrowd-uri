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

int main() {
    
    int cases;

    cin >> cases;

    while(cases--){
        int n;
        cin >> n;

        set<int> carneirinhos;

        for(int i=0; i<n; i++){
            int c;
            cin >> c;
            carneirinhos.insert(c);
        }

        cout << carneirinhos.size() << endl;
    }
    return 0;
}
