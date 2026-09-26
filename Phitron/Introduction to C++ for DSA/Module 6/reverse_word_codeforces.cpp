//
// Created by eftia on 11/30/2025.
//
//Phitron Module: 6

#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss >> word;
    reverse(word.begin(),word.end());
    cout << word;
    while(ss >> word)
    {
        reverse(word.begin(),word.end());
        cout << " " << word;
    }
    return 0;
}
