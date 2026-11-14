//
// Created by eftia on 4/11/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> final_digits(n);
        for (int i = 0; i < n; i++) {
            cin >> final_digits[i];
        }

        for (int i = 0; i < n; i++) {
            int num_moves;
            string moves;
            cin >> num_moves >> moves;

            for (int j = 0; j < num_moves; j++) {
                if (moves[j] == 'U') {
                    final_digits[i] = final_digits[i] - 1;
                } else {
                    final_digits[i] = final_digits[i] + 1;
                }

                if (final_digits[i] < 0) {
                    final_digits[i] = 9;
                }
                if (final_digits[i] > 9) {
                    final_digits[i] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << final_digits[i];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
