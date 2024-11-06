#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) continue;
        res += arr[i - 1] - arr[i];
        arr[i] = arr[i - 1];
    }
    cout << res << endl;
}