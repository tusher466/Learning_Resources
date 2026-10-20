//
// Created by eftia on 2/23/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long r, b, g, skill;
    cin >> r >> b;
    if (r < b)
        g = r;
    else
        g = b;
    skill = r + 2 * b + 2 * g;
    cout << skill;

    return 0;
}
