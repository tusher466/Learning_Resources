#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int initial_ones = 0;
        int max_zeros = 0;
        int current_zeros = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == '1') {
                initial_ones++;
                current_zeros = 0; 
            } else {
                current_zeros++;
                if (current_zeros > max_zeros) {
                    max_zeros = current_zeros;
                }
            }
        }

        cout << initial_ones + max_zeros << endl;
    }

    return 0;
}
