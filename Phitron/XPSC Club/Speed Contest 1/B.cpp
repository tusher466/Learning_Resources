#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int happy_customer = min (n, m - n);
    cout << happy_customer << endl;
  
    return 0;
}
