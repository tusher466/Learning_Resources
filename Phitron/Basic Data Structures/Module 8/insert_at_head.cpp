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

void print_backward(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void insert_at_head(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    insert_at_head(head,100);
    print_forward(head);
    print_backward(tail);

    return 0;
}
