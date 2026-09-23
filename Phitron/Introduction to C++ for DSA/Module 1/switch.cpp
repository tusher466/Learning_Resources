//
// Created by eftia on 11/18/2025.
//
//Phitron Module: 1

#include <iostream>
using namespace std;
int main() {

    int day;
    cin >> day;
    switch (day)
    {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day";
    }

    return 0;
}
