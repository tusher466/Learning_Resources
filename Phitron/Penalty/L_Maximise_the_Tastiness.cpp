//
// Created by eftia on 2/26/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int ingre1 = max(a, b);
        int ingre2 = max(c, d);

        cout << ingre1 + ingre2 << endl;
    }

    return 0;
}
