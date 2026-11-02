#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int freq[101] = {0};
        for (int i = 0; i < n; i++) {
            int type;
            cin >> type;
            freq[type] = 1;
        }

        int unique_count = 0;
        for (int i = 1; i <= m; i++) {
            if (freq[i] == 1) {
                unique_count++;
            }
        }

        cout << m - unique_count << "\n";
    }

    return 0;
}
