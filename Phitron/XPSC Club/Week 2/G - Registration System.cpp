//
// Created by eftia on 4/17/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> database;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name;

        if (database.find(name) == database.end()) {
            cout << "OK" << endl;
            database[name] = 1;
        } else {
            cout << name << database[name] << endl;
            database[name]++;
        }
    }

    return 0;
}
