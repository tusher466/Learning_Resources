#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int max_freq = 0;
        int current_freq = 1;

        if (N == 0) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 1; i < N; i++) {
            if (A[i] == A[i - 1]) {
                current_freq++;
            } else {
                if (current_freq > max_freq) {
                    max_freq = current_freq;
                }
                current_freq = 1;
            }
        }
        
        if (current_freq > max_freq) {
            max_freq = current_freq;
        }

        cout << N - max_freq << endl;
    }
    
    return 0;
}
