#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<string> over(6);
        for (int i = 0; i < 6; i++) {
            cin >> over[i];
        }

        bool hattrick = false;
        for (int i = 0; i <= 3; i++) {
            if (over[i] == "W" && over[i + 1] == "W" && over[i + 2] == "W") {
                hattrick = true;
                break;
            }
        }

        if (hattrick) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
