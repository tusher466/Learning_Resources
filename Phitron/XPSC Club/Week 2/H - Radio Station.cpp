//
// Created by eftia on 4/17/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, string> ip_mp;

    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        ip_mp[ip] = name;
    }

    for (int i = 0; i < m; i++) {
        string command, ip_with_semicolon;
        cin >> command >> ip_with_semicolon;

        string pure_ip = ip_with_semicolon.substr(0, ip_with_semicolon.length() - 1);

        cout << command << " " << ip_with_semicolon << " #" << ip_mp[pure_ip] << endl;
    }

    return 0;
}
