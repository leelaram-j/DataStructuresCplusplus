//
// Created by Lee on 28/09/20.
//

#include <iostream>
using namespace std;

int stack[100],n=100,top=-1;

void push(int value) {
    if(top >= n-1)
        cout << "Stack overflow" << endl;
    else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if(top <= -1)
        cout << "Stack underflow" << endl;
    else {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void display() {
    if(top >= 0) {
        cout << "Stack elements are " << endl;
        for(int i=top;i>=0;i--) {
            cout << stack[i] << "->";
        }
        cout << endl;
    }
    else
        cout << "Stack is empty" << endl;
}

bool isStackEmpty() {
    if(top == -1)
        return true;
    else
        return false;
}

bool isStackFull() {
    if(top >= n-1)
        return true;
    else
        return false;
}

void peek() {
    cout << "Top element in array is " << stack[top] <<endl;
}

int main() {
    int choice, value;
    cout << "Stack Operations" << endl;
    cout << "1) Push" <<endl;
    cout << "2) Pop" << endl;
    cout << "3) Display" << endl;
    cout << "4) Peek" << endl;
    cout << "5) IsEmpty" << endl;
    cout << "6) IfFull" << endl;
    cout << "7) Exit" << endl;
    do {
        cout << "Enter a choice: " << endl;
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter a value to be pushed: " << endl;
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                if(isStackEmpty())
                    cout << "Stack is empty" << endl;
                else
                    cout << "Stack is not empty" << endl;
                break;

            case 6:
                if(isStackFull())
                    cout << "Stack is Full" << endl;
                else
                    cout << "Stack is not Full" << endl;
                break;

            case 7:
                cout << "Exit!!!" << endl;
                break;

            default:
                cout << "Enter a valid choice" << endl;
        }
    } while (choice!=7);
    return 0;
}



