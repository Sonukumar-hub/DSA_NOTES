#include<iostream>
using namespace std;

class Stack {
    int val;
    int arr[100];
    int index;

public:

    Stack() {
        index = -1;
    }

    void push(int val) {
        if(index == 99) {
            cout << "Overflow" << endl;
        }
        else {
            index++;
            arr[index] = val;
            cout << "push value successfully" << endl;
        }
    }

    void pop() {
        if(index == -1) {
            cout << "cannot pop the value" << endl;
        }
        else {
            cout << arr[index] << " Popped" << endl;
            index--;
        }
    }

    int top() {
        if(index == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[index];
    }

    bool empty() {
        return index == -1;
    }

    int size() {
        return index + 1;
    }
};

int main() {

    Stack *s = new Stack();

    s->push(2);
    s->push(5);
    s->push(10);

    cout << "Top: " << s->top() << endl;
    cout << "Size: " << s->size() << endl;

    s->pop();

    cout << "Top: " << s->top() << endl;

    return 0;
}