//
// Created by eftia on 2/23/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int problem;
    int cnt = 0;
    for (int i = 1; i <= 4; i++)
    {
        cin >> problem;
        if (problem >= 10)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
