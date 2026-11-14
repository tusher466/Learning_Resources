//
// Created by eftia on 4/6/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long total_sum = n * (n + 1) / 2;
    long long sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        long long number;
        cin >> number;
        sum += number;
    }

    long long missing_number = total_sum - sum;
    cout << missing_number << endl;
    return 0;
}
