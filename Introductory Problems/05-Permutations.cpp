#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    vector<int>res;

    int high_odd = (n % 2 == 0) ? n - 1 : n;
    while(high_odd > 0) {
        cout << high_odd << ' ';
        high_odd -= 2;
    }

    int high_even = (n % 2 == 0) ? n : n - 1;
    while(high_even > 0) {
        cout << high_even << ' ';
        high_even -= 2;
    }

    cout << endl;
}