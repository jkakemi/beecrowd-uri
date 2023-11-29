#include <iostream>

using namespace std;

int main()
{

    int n, v, i = 0;

    cin >> n;

    while (i < n)
    {
        cin >> v;

        if (v == 0)
        {
            cout << "NULL" << endl;
        }
        else
        {
            if (v % 2 == 0)
            {
                cout << "EVEN ";
            }
            else
            {
                cout << "ODD ";
            }
            if(v < 0){
                cout << "NEGATIVE" << endl;
            }
            else{
                cout << "POSITIVE" << endl;
            }
            
        }
        i++;
    }

    return 0;
}