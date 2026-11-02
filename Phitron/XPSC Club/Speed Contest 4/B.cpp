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
        
        int chef_score = a[0];
        int passed_count = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] >= chef_score) {
                passed_count++;
            }
        }
        
        cout << passed_count << endl;
    }
    
    return 0;
}
