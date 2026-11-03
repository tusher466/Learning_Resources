#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long total_breaks = 0;
        for (int i = 0; i < n; ++i) {
            long long item;
            cin >> item;
            total_breaks += (item - 1);
        }
        
        cout << total_breaks << endl;
    }
    
    return 0;
}
