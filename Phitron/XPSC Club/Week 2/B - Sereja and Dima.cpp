//
// Created by eftia on 4/11/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cards[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int sereja = 0, dima = 0;
    int left = 0;
    int right = n - 1;
    bool sereja_play = true;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (sereja_play) {
                sereja += cards[left];
            } else {
                dima += cards[left];
            }
            left++;
        } else {
            if (sereja_play) {
                sereja += cards[right];
            } else {
                dima += cards[right];
            }
            right--;
        }
        sereja_play = !sereja_play;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
