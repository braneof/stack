#pragma once
class Node
{
public:
    Node(int value): next(nullptr), data(value) {}
    ~Node(void) {}

    Node *getNext() { return next; }
    void setNext(Node *node) { next = node; }
    int value() { return data; }
    void setValue(int value) { data = value; }

private:
    Node* next;
    int data;
};

