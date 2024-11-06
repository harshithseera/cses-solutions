#include <bits/stdc++.h>
using namespace std;

#define int long long

void next(int x) {
    cout << x << ' ';
    if(x == 1) {
        cout << endl;
        return;
    }  
    if(x % 2 == 0) {
        next(x / 2);
    } else {
        next(3 * x + 1);
    }
}

signed main() {
    int n;
    cin >> n;
    next(n);
}