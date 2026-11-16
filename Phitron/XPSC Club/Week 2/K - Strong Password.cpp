//
// Created by eftia on 4/14/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int n = s.length();
        bool flag = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                char to_insert = (s[i] == 'a' ? 'b' : 'a');
                cout << s.substr(0, i + 1) + to_insert + s.substr(i + 1) << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            char last_char = s[n - 1];
            char to_insert = (last_char == 'a' ? 'b' : 'a');
            cout << s + to_insert << endl;
        }
    }

    return 0;
}
