//
// Created by eftia on 2/26/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int player1_total = 0;
    int player2_total = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int s1, s2;
        cin >> s1 >> s2;

        player1_total += s1;
        player2_total += s2;

        int current_lead = 0;
        int current_leader = 0;

        if (player1_total > player2_total) {
            current_lead = player1_total - player2_total;
            current_leader = 1;
        } else {
            current_lead = player2_total - player1_total;
            current_leader = 2;
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << endl;

    return 0;
}
