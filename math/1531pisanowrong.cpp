#include <bits/stdc++.h>
using namespace std;

string add(string a, string b) {
    int carry = 0;
    string result = "";
    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

string subtract(string a, string b) {
    bool negative = false;
    if (a < b) {
        swap(a, b);
        negative = true;
    }

    string result = "";
    int borrow = 0;
    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0) {
        int diff = (a[i] - '0') - (j >= 0 ? b[j] - '0' : 0) - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += diff + '0';
        i--; j--;
    }
    
    reverse(result.begin(), result.end());
    return negative ? "-" + result : result;
}

string mod(string a, long m) {
    long result = 0;
    for (char digit : a) {
        result = (result * 10 + (digit - '0')) % m;
    }
    return to_string(result);
}

long pisano(long m) {
    long prev = 0;
    long curr = 1;
    for (long i = 0; i < m * m; i++) {
        long temp = prev;
        prev = curr;
        curr = (temp + curr) % m;
        if (prev == 0 && curr == 1) {
            return i + 1;
        }
    }
    return 0;
}

string fibonacciModulo(string n, long m) {
    long pisanoPeriod = pisano(m);

    string n_mod_pisano = mod(n, pisanoPeriod);

    long n_mod = stoll(n_mod_pisano);

    long prev = 0;
    long curr = 1;

    if (n_mod == 0) return "0";
    if (n_mod == 1) return "1";

    for (long i = 2; i <= n_mod; i++) {
        long temp = prev;
        prev = curr;
        curr = (temp + curr) % m;
    }

    return to_string(curr);
}

int main() {
    string n;
    long m;

    while (cin >> n >> m) {
        string fibN = fibonacciModulo(n, m); 
        cout << fibonacciModulo(fibN, m) << endl;
    }
    return 0;
}
