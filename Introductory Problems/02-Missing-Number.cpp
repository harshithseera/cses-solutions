#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    int xor1 = 1;
    int xor2 = 0; 
    for(int i = 2; i <= n; i++) { 
        int temp;
        cin >> temp;
        xor1 ^= i;
        xor2 ^= temp;
    }

    cout << (xor1 ^ xor2) << endl;
}