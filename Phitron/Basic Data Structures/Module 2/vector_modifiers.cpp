//
// Created by eftia on 1/5/2026.
//
//Phitron Module: 2

#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> v = {1,2,3,4,5,2,5,3,2};
    // vector<int> v2 = {100,200,300};
    // v.erase(v.begin()+2, v.end()-1);

    // replace(v.begin(), v.end()-1, 2, 100);
    auto it = find(v.begin(), v.end(), 2);
    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }


    // v.insert(v.begin()+2,v2.begin(),v2.end());

    // v.pop_back();
    // v.pop_back();
    // v.push_back(1);
    // v.push_back(2);


    // vector<int> v2;
    // v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // for (int x : v)
    // {
    //   cout << x << " " ;
    // }

    return 0;
}
