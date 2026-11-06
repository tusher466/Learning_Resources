#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int na, nb, nc, nd;
        cin >> na >> nb >> nc >> nd;

        int ans = max({na, nb, nc, nd});
        cout << ans << endl;
    }

    return 0;
}
