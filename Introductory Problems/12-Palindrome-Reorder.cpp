#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string str;
    cin >> str;

    int n = str.size();
    char uni = 0;
    int hash[26] = {0};
    for(int i = 0; i < n; i++) {
        hash[str[i] - 'A']++;
    }
    string res = "";
    string rev = "";
    for(int i = 0; i < 26; i++) {
        if(hash[i] % 2) {
            if(n % 2 == 0 || uni != 0) {
                cout << "NO SOLUTION\n";
                return 0;
            } else {
                uni = 'A' + i;
            }
        }
        for(int j = 0; j < hash[i] / 2; j++) {
            res.push_back('A' + i);
            rev.push_back('A' + i);
        }
    }
    if(n % 2 == 1) res.push_back(uni);
    reverse(rev.begin(), rev.end());
    cout << res << rev << endl;
}