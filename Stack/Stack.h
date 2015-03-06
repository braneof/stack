#pragma once
#include "Node.h"

class Stack
{
public:
    Stack(void);
    ~Stack(void);
    void push(int);
    void push(Node*);
    int pop();
    //Node* pop();
    Node* topNode();

private:
    Node *head;
};

