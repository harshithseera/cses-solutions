#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int>arr(n + 1);
    cout << 0 << endl;
    for(int i = 2; i <= n; i++) {
        cout << (i * i) * ((i * i) - 1) / 2 - 4 * (i - 2) * (i - 1) << endl;
    }
}