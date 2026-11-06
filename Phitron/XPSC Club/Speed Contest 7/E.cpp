#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        
        int total_squares = 0;
        
        for (int r1 = 0; r1 < n; r1++) {
            for (int r2 = r1 + 1; r2 < n; r2++) {
                int side = r2 - r1;
                
                for (int c1 = 0; c1 + side < m; c1++) {
                    int c2 = c1 + side;
                    
                    if (grid[r1][c1] == grid[r1][c2] && 
                        grid[r1][c1] == grid[r2][c1] && 
                        grid[r1][c1] == grid[r2][c2]) {
                        total_squares++;
                    }
                }
            }
        }
        
        cout << total_squares << endl;
    }
    
    return 0;
}
