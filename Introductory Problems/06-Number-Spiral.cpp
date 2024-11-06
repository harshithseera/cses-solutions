#include <bits/stdc++.h>
using namespace std;

#define int long long

void run() {
    int m, n;
    cin >> m >> n;
    int layer = max(m, n);
    if(layer % 2 == 1) {
        swap(m, n);
    }
    if(m > n) {
        cout << layer * layer - (n - 1) << endl;
    } else {
        cout << (layer - 1) * (layer - 1) + m << endl;
    }
}

signed main() {
    int n;
    cin >> n;
    while(n--) {
        run();
    }
}