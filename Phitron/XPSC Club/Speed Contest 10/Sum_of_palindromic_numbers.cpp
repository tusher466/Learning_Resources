#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<long long> prefix(100005, 0);
    long long sum = 0;

    for (int i = 1; i <= 100000; i++) {
        int original = i;
        int reversed = 0;
        int temp = i;
        
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        
        if (original == reversed) {
            sum += i;
        }
        prefix[i] = sum;
    }

    int t;
    if (cin >> t) {
        while (t--) {
            int l, r;
            cin >> l >> r;
            cout << prefix[r] - prefix[l - 1] << "\n";
        }
    }

    return 0;
}
