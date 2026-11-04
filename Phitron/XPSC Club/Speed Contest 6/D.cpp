#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long b, c;
        cin >> b >> c;

        long long g = std::gcd(b, c);
        long long a = c / g;

        cout << a << endl;
    }

    return 0;
}
