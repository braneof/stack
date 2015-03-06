#include "Stack.h"


Stack::Stack(void)
{
    head = nullptr;
}


Stack::~Stack(void)
{ 
    while( head ){
        Node * headHolder = head;
        head = head->getNext();
        delete headHolder;
    }
}

void Stack::push(int value){
    push(new Node(value));
}

void Stack::push(Node *node){
    Node * headHolder = head;
    head = node;
    head->setNext(headHolder);
}

int Stack::pop() {
    Node * headHolder = head;
    int val = head->value();
    head = head->getNext();
    delete headHolder;
    return val;
}

//Node* Stack::pop() {
//    Node * headHolder = head;
//    head = head->getNext();
//    return headHolder;
//}

Node* Stack::topNode() {
    return head;
}