//
// Created by eftia on 1/12/2026.
//
//Phitron Module: 8

#include <bits/stdc++.h>
using namespace std;

class Node {

public:
    int val;
    Node* next;
    Node* prev;

    Node (int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail(Node* head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_tail(head,tail,40);
    print_forward(head);

    return 0;
}
