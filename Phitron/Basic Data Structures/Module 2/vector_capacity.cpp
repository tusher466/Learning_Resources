//
// Created by eftia on 1/5/2026.
//
//Phitron Module: 2

#include <bits/stdc++.h>
using namespace std;
int main () {

    vector<int> v;
    // cout << v.size() << endl;
    // cout << v.max_size() << endl;
    // v.push_back(1);
    // cout << v.capacity() << endl;
    // v.push_back(2);
    // cout << v.capacity() << endl;
    // v.push_back(3);
    // cout << v.capacity() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(10,100);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[0] << endl;


    return 0;
}
