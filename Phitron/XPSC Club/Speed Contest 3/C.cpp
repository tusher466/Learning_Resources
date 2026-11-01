#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long min_cost = -1;

        for (int i = 0; i < N - 1; i++) {
            long long current = A[i] + (A[i + 1] / 2);
            if (min_cost == -1 || current < min_cost) {
                min_cost = current;
            }
        }

        vector<long long> sorted_A = A;
        sort(sorted_A.begin(), sorted_A.end());
        long long cheapest_two = sorted_A[0] + sorted_A[1];

        if (cheapest_two < min_cost) {
            min_cost = cheapest_two;
        }

        cout << min_cost << endl;
    }
    return 0;
}
