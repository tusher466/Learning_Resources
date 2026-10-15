//
// Created by eftia on 2/23/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, remain_toys;
    cin >> n >> m;
    if (m < n)
    {
        remain_toys = n - m;
        cout << remain_toys;
    }
    else
        cout << 0 << endl;

    return 0;
}
