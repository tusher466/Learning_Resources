//
// Created by eftia on 11/30/2025.
//
//Phitron Module: 6

#include <bits/stdc++.h>
using namespace std;
class Student
{
 public:
    string name;
    int roll;
    Student(string name,int roll) {
        this->name = name;
        this->roll = roll;
    }
    void hello() {
        cout << "Hello " << endl;
    }
};
int main() {

    Student efti("Eftia",101);
    cout << efti.name << endl;
    efti.hello();

    return 0;
}
