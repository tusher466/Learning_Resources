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

        if(n % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(),s.end());
        bool ok = true;

        for(int i = 0; i < n; i+=2)
        {
            if(s[i] != s[i+1])
            {
                ok = false;
                break;
            }
        }

        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
