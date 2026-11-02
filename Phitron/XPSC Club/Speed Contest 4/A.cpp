#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long R, B;
    if (cin >> R >> B) {
        long long G = min(R, B);
        long long max_skill = R + 2 * B + 2 * G;
        cout << max_skill << endl;
    }
    return 0;
}
