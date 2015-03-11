#include "Stack.h"
#include <iostream>

using namespace std;

Node* head = nullptr;
Node* tail = nullptr;

bool deleteNode( Node *node ) {
    if(node){
    } else {
        return false;
    }
    Node *prev = nullptr;
    Node* curr = head;
    if ( curr == node) {
        if (tail == head)
            tail = head->getNext();
        head = head->getNext();
        delete curr;
        return true;
    }

    while( curr ) {
        if( curr->getNext() == node ) {
            if(node == tail){
                tail = curr;
            }
            curr->setNext(node->getNext());
            delete node;
            return true;
        } else {
            curr = curr->getNext();
        }
    }
    return false;
}

bool insertAfter( Node *node, int data ) {
    Node *prev = nullptr;
    Node* curr = new Node(data);
    if(node){
    } else {
        curr->setNext(head);
        if (!head) { // if list is empty, set tail to first item
            tail = curr;
        }
        head = curr;
        return true;
    }
    prev = head;
    while( prev ) {
        if( prev == node ) {
            curr->setNext(prev->getNext());
            prev->setNext(curr);
            if(prev == tail){
                tail = curr;
            }
            return true;
        } else {
            prev = prev->getNext();
        }
    }
    delete curr;
    return false;
}


int main() {
    //Stack stack;
    //stack.push(3);
    //stack.push(9);
    //stack.push(87);
    //stack.push(1);
    //stack.push(6);
    //stack.push(78);
    //stack.push(3);
    //stack.push(0);

    if(deleteNode(head)) {
    } else {
        cout << "Can't delete from empty list" << endl;
    }
    int num = 0;
    Node *node = nullptr;
    for(int i = 0; i < 10; i++) {
        if ( insertAfter(node,i) ){
        } else {
            cout << "\nTHere was an insert error!\n";
        }
        node = tail;
    }
    cout << "Head and tail: " << head->value() << " " << tail->value() << endl;
    if(deleteNode(head)) {
    } else {
        cout << "error deleting" << endl;
    }
    cout << "Head and tail: " << head->value() << " " << tail->value() << endl;
    if(deleteNode(tail)) {
    } else {
        cout << "error deleting tail" << endl;
    }
    cout << "Head and tail: " << head->value() << " " << tail->value() << endl;
    
    //while( stack.topNode() ) {
    //    cout << stack.pop() << endl;
    //    ++num;
    //}
    int n;
    cin >> n;
    return num;
}