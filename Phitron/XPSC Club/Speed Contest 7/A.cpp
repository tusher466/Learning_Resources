#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int eliminated = n - k;
    int total_prize = eliminated * 10000;
    
    cout << total_prize << endl;
    
    return 0;
}
