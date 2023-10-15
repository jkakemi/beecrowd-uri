#include <bits/stdc++.h>

using namespace std;

int main()
{

    int quant, prod, comp;
    double t=0.0;

    cin >> quant;

    while(quant--){
        cin >> prod >> comp;

        if(prod == 1001){
            t = t + (comp*1.50);
        }
        if(prod == 1002){
            t = t + (comp*2.50);
        }
        if(prod == 1003){
            t = t + (comp*3.50);
        }
        if(prod == 1004){
            t = t + (comp*4.50);
        }
        if(prod == 1005){
            t = t + (comp*5.50);
        }
    }

    cout << fixed << setprecision(2) << t << endl;

    return 0;
}