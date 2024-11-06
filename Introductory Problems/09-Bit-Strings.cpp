#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int cur = 2;
    for(int i = 1; i < n; i++) {
        cur *= 2;
        cur %= 1000000007;
    }
    cout << cur << endl;
}