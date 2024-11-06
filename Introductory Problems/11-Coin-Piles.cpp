#include <bits/stdc++.h>
using namespace std;

#define int long long

void run() {
    int m, n;
    cin >> m >> n;
    if(m < n) swap(m, n);
    int red = m - n;
    m -= 2 * red;
    n -= red;
    if(n < 0 || m % 3 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main() {
    int n;
    cin >> n;
    while(n--) {
        run();
    }
}