#include <iostream>
using namespace std;

class Stack
{
    // Properties
private:
    int top;
    int *arr;
    int len;

public:
    // Methods
    Stack(int size)
    {
        this->top = -1;
        this->len = size;
        arr = new int[size];
    }

    // insert
    void push(int data)
    {
        if (this->top + 1 == this->len)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            this->top++;
            arr[this->top] = data;
        }
    }

    // delete
    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        else
        {
            this->top--;
        }
    }

    // top elem
    int peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            return arr[this->top];
        }
    }

    // Check empty
    bool empty()
    {
        if (this->top == -1)
            return true;
        else
            return false;
    }

    // size
    int size()
    {
        return top + 1;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(2);

    s.push(2);
    s.push(1);

    s.pop();

    s.push(1);

    // cout << s.size();
    cout << s.peek();
}