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

Student fun() {
    Student karim(2,5,5.00);
    return karim;
}

int main(){

    Student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}
