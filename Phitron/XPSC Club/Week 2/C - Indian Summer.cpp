//
// Created by eftia on 4/12/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<string, string>> unique_leaves;

    for (int i = 0; i < n; i++) {
        string tree, color;
        cin >> tree >> color;
        unique_leaves.insert({tree, color});
    }

    cout << unique_leaves.size() << endl;

    return 0;
}
