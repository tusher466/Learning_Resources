//
// Created by eftia on 12/1/2025.
//
//Phitron Module: 6

#include <bits/stdc++.h>
using namespace std;
class Cricketer {
    public:
        string country;
        int jersey;

        Cricketer(string country, int jersey) {
            this->country = country;
            this->jersey = jersey;
        }
};
int main() {

    Cricketer* dhoni = new Cricketer("India",100);
    Cricketer* kholi = new Cricketer("India",18);
    // kholi->jersey = dhoni->jersey;
    // kholi->country = dhoni->country;
    *kholi = *dhoni;
    delete dhoni;
    cout << kholi->jersey << " " << kholi->country << endl;
    return 0;
}
