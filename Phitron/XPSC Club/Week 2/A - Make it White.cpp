//
// Created by eftia on 4/11/2026.
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
        string s;
        cin >> n >> s;

        int first_black = s.find('B');
        int last_black = s.rfind('B');
        cout << (last_black - first_black + 1) << endl;
    }

    return 0;
}
