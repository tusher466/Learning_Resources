//
// Created by eftia on 4/8/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << (n + 1) - a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
