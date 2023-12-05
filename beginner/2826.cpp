#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    int i = 0;
    while (i < a.length() && i < b.length()) {
        if (a[i] < b[i]) {
            cout << a << endl << b << endl;
            return 0;
        } else if (a[i] > b[i]) {
            cout << b << endl << a << endl;
            return 0;
        }
        i++;
    }

    if (a.length() < b.length()) {
        cout << a << endl << b << endl;
    } else {
        cout << b << endl << a << endl;
    }

    return 0;
}
