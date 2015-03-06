#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    Stack stack;
    stack.push(3);
    stack.push(9);
    stack.push(87);
    stack.push(1);
    stack.push(6);
    stack.push(78);
    stack.push(3);
    stack.push(0);
    int num = 0;
    while( stack.topNode() ) {
        cout << stack.pop() << endl;
        ++num;
    }
    int n;
    cin >> n;
    return num;
}