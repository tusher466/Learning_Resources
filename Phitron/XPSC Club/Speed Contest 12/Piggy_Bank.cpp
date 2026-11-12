#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    
    int eli_players = n - k;
    int total_prize = eli_players * 10000;
    
    cout << total_prize << endl;
    
    return 0;
}
