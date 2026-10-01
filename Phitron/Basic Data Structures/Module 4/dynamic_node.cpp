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
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {

    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);

    (*head).next = a;
    (a->next) = b;

    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;

    return 0;
}
