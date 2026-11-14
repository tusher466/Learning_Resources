//
// Created by eftia on 4/6/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long movies = 0;
    long long max_val = 0;

    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        if (i == 0)
        {
            max_val = val;
        }
        else
        {
            if (val < max_val)
            {
                movies += max_val - val;
            }
            else
            {
                max_val = val;
            }
        }
    }

    cout << movies << endl;
    return 0;
}
