#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        maxEnding = max(maxEnding + arr[i], arr[i]);
      
        res = max(res, maxEnding);
    }
    return res;
}

int main() {
    vector<int> arr;

    int x;

    cin >> x;
    int a;
    while(x--){
        cin >> a;
        arr.push_back(a);
    }
    cout << maxSubarraySum(arr) << endl;
    return 0;
}

// KADANE ALGORITHM