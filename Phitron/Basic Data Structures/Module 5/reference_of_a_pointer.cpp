//
// Created by eftia on 1/8/2026.
//
//Phitron Module: 5

#include <bits/stdc++.h>
using namespace std;

void fun(int* ptr)
{
    ptr = NULL;
    // *ptr = 10;
    // cout << "In fun: " << *ptr << endl;
}
int main() {

    int x = 100;
    int* ptr = &x;
    fun(ptr);
    cout << "In main: " << x << endl;

    return 0;
}
