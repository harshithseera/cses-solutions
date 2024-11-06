#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string str;
    cin >> str;

    int cnt = 0;
    char cur = 0;
    int res = 0;

    for(char c : str) {
        if(c == cur) cnt++;
        else {
            res = max(res, cnt);
            cur = c;
            cnt = 1;
        }
    }
    cout << max(res, cnt) << endl;
}