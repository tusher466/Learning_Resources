#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int A, B;
        cin >> A >> B;

        int small_comparison = 100 * B;
        int large_comparison = 225 * A;

        if (small_comparison > large_comparison) {
            cout << "Small" << endl;
        } else if (large_comparison > small_comparison) {
            cout << "Large" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }

    return 0;
}
