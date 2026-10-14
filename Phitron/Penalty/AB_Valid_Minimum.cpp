#include<bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    sort(a.begin(), a.end());
    
    if (a[0] == a[1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
