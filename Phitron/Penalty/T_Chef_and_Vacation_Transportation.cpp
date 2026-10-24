//
// Created by eftia on 3/7/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        if (x + y > z)
        {
            cout << "TRAIN" << endl;
        }
        else if (x + y < z)
        {
            cout << "PLANEBUS" << endl;
        }
        else
            cout << "EQUAL" << endl;
    }

    return 0;
}
