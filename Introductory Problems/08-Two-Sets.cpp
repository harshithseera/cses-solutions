#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    if(n % 4 != 0 && n % 4 != 3) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    int idx = 1;
    vector<int>arr1;
    vector<int>arr2;
    if(n % 4 == 0) {
        arr1.push_back(1);
        arr1.push_back(4);
        arr2.push_back(2);
        arr2.push_back(3);
        idx = 4;
    } else {
        arr1.push_back(1);
        arr1.push_back(2);
        arr2.push_back(3);
        idx = 3;
    }
    while(idx + 4 <= n) {
        arr1.push_back(idx + 1);
        arr1.push_back(idx + 4);
        arr2.push_back(idx + 2);
        arr2.push_back(idx + 3);
        idx += 4;
    }
    
    cout << arr1.size() << endl;
    for(int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << ' ';
    }
    cout << endl;

    cout << arr2.size() << endl;
    for(int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << ' ';
    }
    cout << endl;
}