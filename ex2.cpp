#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> element;

public:
    void push(int value) {
        element.push_back(value);
    }

    void pop() {
        if (!element.empty()) {
            element.pop_back();
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    void display() const {
        for (int elem : element) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack p_1;
    Stack p_2;
    p_1.push(5);
    p_1.push(10);
    p_1.display();

    p_1.pop();
    p_1.display();

    return 0;
}
