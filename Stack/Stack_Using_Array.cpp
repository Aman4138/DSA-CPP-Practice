#include <bits/stdc++.h>
using namespace std;

class Stack {
    int arr[1000];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 999) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1)
            return -1;
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};
