#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;

        while (A % 2 == 0) {
            A /= 2;
        }
        while (B % 2 == 0) {
            B /= 2;
        }

        if (A == B) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
