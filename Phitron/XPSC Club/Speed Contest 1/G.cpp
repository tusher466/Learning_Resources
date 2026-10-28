#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;

        int ones = 0;
        for (char c : S) {
            if (c == '1') ones++;
        }

        int min = 0, max = 0;
        
        for (int i = 0; i < K; i++) {
            int len = 0;
            for (int j = i; j < N; j += K) {
                len++;
            }
            
            min += len / 2;
            max += (len + 1) / 2;
        }

        if (ones >= min && ones <= max) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}
