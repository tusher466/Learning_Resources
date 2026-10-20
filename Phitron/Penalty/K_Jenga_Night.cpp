//
// Created by eftia on 2/23/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        if (x % n == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
