#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int res = 0;
    int cur = 5;
    while(cur <= n) {
        res += n / cur;
        cur *= 5;
    }
    cout << res << endl;
}