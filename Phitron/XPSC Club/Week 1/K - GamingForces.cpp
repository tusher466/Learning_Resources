//
// Created by eftia on 4/8/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                cnt++;
        }
        cout << n - cnt / 2 << endl;
    }

    return 0;
}
