//
// Created by eftia on 1/25/2026.
//
//Problem: https://codeforces.com/contest/2005/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> v = {'a', 'e', 'i', 'o', 'u'};
        string ans = "";
        int i = 0;
        while(n--) {
            ans += v[i];
            i++;
            if (i == 5) i = 0;
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
