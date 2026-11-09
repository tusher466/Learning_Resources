#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, m;
        cin >> n >> m;

        if(m < n)
        {
            cout << (n - m) << endl;
        }
        else
        {
            long long rem = m % n;
            cout << min(rem, n - rem) << endl;
        }
    }

    return 0;
}
