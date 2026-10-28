#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_cost = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            
            int current_sum = a[i] + a[i + 1];
            if (current_sum < min_cost) {
                min_cost = current_sum;
            }
            
        }
        
        cout << min_cost << endl;
    }
    
    return 0;
}
