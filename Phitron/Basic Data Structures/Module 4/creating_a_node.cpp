//
// Created by eftia on 1/8/2026.
//
//Phitron Module: 4

#include <bits/stdc++.h>
using namespace std;

    class Node {
        public:
            int val;
            Node* next;
    };

int main() {

    Node a, b, c;
    a.val = 10;
    a.next = &b;
    b.val = 20;
    b.next = &c;
    c.val = 30;
    c.next = NULL;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;

    // cout << &a << endl;
    // cout << &b << endl;
    // cout << &c << endl;

    return 0;
}
