#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long W;
        cin >> n >> W;

        multiset<int> widths;
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            widths.insert(w);
        }

        int height = 1;
        long long current_space = W;

        while (!widths.empty()) {
            auto it = widths.upper_bound(current_space);

            if (it == widths.begin()) {
                height++;
                current_space = W;
            } else {
                --it;
                current_space -= *it;
                widths.erase(it);
            }
        }
        cout << height << "\n";
    }

    return 0;
}
