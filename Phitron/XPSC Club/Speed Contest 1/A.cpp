#include<bits/stdc++.h>
using namespace std;

int main() {
    int rank;
    cin >> rank;

    if (rank == 1) {
        cout << 8000 << endl;
    } else if (rank == 2) {
        cout << 4000 << endl;
    } else if (rank == 3) {
        cout << 2000 << endl;
    } else if (rank == 4) {
        cout << 1000 << endl;
    }

    return 0;
}
