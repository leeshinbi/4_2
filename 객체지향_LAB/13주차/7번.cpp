#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

template <typename T>
class Stack {
private:
    T data[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool empty() {
        return top == -1;
    }

    bool full() {
        return top == MAX_SIZE - 1;
    }

    void push(const T& item) {
        if (!full()) {
            data[++top] = item;
        }
        else {
            cerr << "스택이 꽉 차있습니다." << endl;
        }
    }

    T pop() {
        if (!empty()) {
            return data[top--];
        }
        else {
            cerr << "스택이 비어있습니다." << endl;
            return T();
        }
    }

    T peek() {
        if (!empty()) {
            return data[top];
        }
        else {
            cerr << "스택이 비어있습니다." << endl;
            return T();
        }
    }
};

int main() {
    Stack<int> integer_stack;
    Stack<string> string_stack;

    integer_stack.push(2);
    integer_stack.push(54);
    integer_stack.push(255);

    string_stack.push("Welcome");
    string_stack.push("to");
    string_stack.push("C++ World");

    cout << integer_stack.pop() << " is removed from stack" << endl;
    cout << string_stack.pop() << " is removed from stack" << endl;

    cout << "Top element is " << integer_stack.peek() << endl;
    cout << "Top element is " << string_stack.peek() << endl;

    return 0;
}
