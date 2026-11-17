#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int m, q;
        cin >> n >> m >> q;

        vector<long long> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        for (int i = 0; i < q; i++) {
            long long a;
            cin >> a;

            auto it = lower_bound(b.begin(), b.end(), a);

            if (it == b.begin()) {
                cout << b[0] - 1 << "\n";
            } else if (it == b.end()) {
                cout << n - b[m - 1] << "\n";
            } else {
                long long r = *it;
                long long l = *(--it);
                cout << (r - l) / 2 << "\n";
            }
        }
    }
    return 0;
}
