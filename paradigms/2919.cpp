#include <bits/stdc++.h>
using namespace std;

int lis(const vector<int>& arr) {
    vector<int> lis;

    for (int x : arr) {
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if (it == lis.end()) {
            lis.push_back(x);
        } else {
            *it = x;
        }
    }

    return lis.size();
}

int main() {
    int n, num;

    while (cin >> n) {
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            cin >> num;
            arr.push_back(num);
        }

        int x = lis(arr);

        cout << x << endl;
    }

    return 0;
}


// COMPLEXIDADE O(N^2)

// #include <bits/stdc++.h>
// using namespace std;

// int lis(const vector<int> &arr)
// {
//     int n = arr.size();

//     vector<int> dp(n, 1);

//     for (int i = 1; i < n; ++i)
//     {
//         for (int j = 0; j < i; ++j)
//         {
//             if (arr[i] > arr[j])
//             {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }
//     }

//     // Valor máximo de uma matriz/vector
//     return *max_element(dp.begin(), dp.end());
// }

// int main()
// {

//     int n, num;

//     while (cin >> n)
//     {
//         vector<int> arr;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> num;
//             arr.push_back(num);
//         }

//         int x = lis(arr);

//         cout << x << endl;


//     }
//     return 0;
// }
