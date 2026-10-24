#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int zeros = 0;
        int ones = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == '0') {
                zeros = zeros + 1;
            } else {
                ones = ones + 1;
            }
        }

        if (zeros == ones) {
            cout << N << endl;
        } else if (zeros < ones) {
            cout << (2 * zeros + 1) << endl;
        } else {
            cout << (2 * ones + 1) << endl;
        }
    }
    return 0;
}
