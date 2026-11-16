//
// Created by eftia on 4/14/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> seen;
        int moves = 0;

        for (int i = n - 1; i >= 0; i--)
        {

            if (seen.count(a[i]))
            {
                moves = i + 1;
                break;
            }
            seen.insert(a[i]);
        }

        cout << moves << endl;
    }

    return 0;
}
