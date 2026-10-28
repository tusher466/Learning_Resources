#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long R, B, G;
        cin >> R >> B >> G;

        long long bundles = min({R, B, G});
        long long remaining = (R - bundles) + (B - bundles) + (G - bundles);
        long long total_coins = (bundles * 10) + (remaining * 3);

        cout << total_coins << endl;
    }

    return 0;
}
