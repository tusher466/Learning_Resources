#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        while (n > 0) {
            count += (n % 2);
            n /= 2;
        }

        if (count % 2 == 0) {
            cout << "EVEN" << endl;
        } else {
            cout << "ODD" << endl;
        }
    }

    return 0;
}
