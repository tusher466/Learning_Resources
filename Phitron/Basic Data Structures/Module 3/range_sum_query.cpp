//
// Created by eftia on 1/6/2026.
//
//Phitron Module: 3
//Codeforces Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n,q;
    cin >> n >> q;
    vector<long long int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> prefix_sum(n + 1);
    prefix_sum[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        long long int sum;
        if(l == 1)
        {
            sum = prefix_sum[r];
        }
        else
        {
            sum = prefix_sum[r] - prefix_sum[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
