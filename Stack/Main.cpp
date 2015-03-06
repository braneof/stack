#include "Stack.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

const string phoneMap[10] = {"$/*","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz_"};

static void printAll(string prefix, Stack digits) {
    int top = digits.pop();
    string a = prefix + phoneMap[top].at(0);
    string b = prefix + phoneMap[top].at(1);
    string c = prefix + phoneMap[top].at(2);
    if(digits.topNode()) {
        printAll(a,digits);
        printAll(b,digits);
        printAll(c,digits);
    } else {
        cout << a << ", ";
        cout << b << ", ";
        cout << c << ", ";
    }
}

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
    int phoneNum = 1928423;
    Stack digits;
    while(phoneNum > 0) {
        digits.push(phoneNum % 10);
        phoneNum /= 10;
    }

    printAll("", digits);
    /*while( stack.topNode() ) {
        cout << stack.pop() << endl;
        ++num;
    }*/
    int n;
    cin >> n;
    return num;
}

