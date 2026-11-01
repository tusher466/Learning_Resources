#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> C(N);
        for (int i = 0; i < N; i++) {
            cin >> C[i];
        }

        sort(C.begin(), C.end(), greater<int>());

        long long sum = 0;
        for (int i = 0; i < K; i++) {
            sum += C[i];
        }

        cout << sum << endl;
    }
    return 0;
}
