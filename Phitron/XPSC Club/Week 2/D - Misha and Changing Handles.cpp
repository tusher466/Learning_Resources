//
// Created by eftia on 4/16/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, string> owner;

    for (int i = 0; i < q; i++)
    {
        string old_h, new_h;
        cin >> old_h >> new_h;

        bool found = false;
        for (auto it = owner.begin(); it != owner.end(); ++it)
        {
            if (it->first == old_h)
            {
                string original = it->second;
                owner.erase(it);
                owner[new_h] = original;
                found = true;
                break;
            }
        }

        if (!found)
        {
            owner[new_h] = old_h;
        }
    }

    cout << owner.size() << endl;
    for (auto it = owner.begin(); it != owner.end(); ++it)
    {
        cout << it->second << " " << it->first << endl;
    }

    return 0;
}
