//
// Created by eftia on 11/20/2025.
//
//Phitron Module: 3

#include <bits/stdc++.h>
using namespace std;

class Student{

public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

int main(){

    Student rahim(45,5,4.50);
    Student karim(2,5,5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}
