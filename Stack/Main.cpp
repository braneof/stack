#include "Stack.h"
#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;

const string phoneMap[10] = {"$/*","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz_"};
int recCount = 0;

static void printAll(string prefix, vector<int> digits, int index) {
    recCount++;
    int curr = digits[index];
    string a = prefix + phoneMap[curr].at(0);
    string b = prefix + phoneMap[curr].at(1);
    string c = prefix + phoneMap[curr].at(2);
    if(index < digits.size()-1) {
        index++;
        printAll(a,digits,index);
        printAll(b,digits,index);
        printAll(c,digits,index);
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
    int phoneNum = 810781427;
    vector<int> digits;
    while(phoneNum > 0) {
        digits.insert(digits.begin(),phoneNum % 10);
        phoneNum /= 10;
    }

    printAll("", digits, 0);
    /*while( stack.topNode() ) {
        cout << stack.pop() << endl;
        ++num;
    }*/
    cout << endl << recCount;
    int n;
    cin >> n;
    return num;
}

