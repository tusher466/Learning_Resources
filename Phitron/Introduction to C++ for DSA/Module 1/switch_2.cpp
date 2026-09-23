//
// Created by eftia on 11/18/2025.
//
//Phitron Module: 1

#include <iostream>
using namespace std;
int main() {

    int x;
    cin >> x;
    switch (x % 2)
    {
        case 0: cout << "x is even"; break;
        case 1: cout << "x is odd";
    }

    return 0;
}
