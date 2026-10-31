#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) 
    {
        long long A, B, X;
        cin >> A >> B >> X;

        long long blue_area = X * X;
        long long red_area = A * B;

        if (blue_area >= red_area) {
            cout << 0 << endl;
        } else if (blue_area >= A || blue_area >= B) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    
    return 0;
}
