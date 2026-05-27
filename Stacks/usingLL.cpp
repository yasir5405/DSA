#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

class Stack
{
private:
    Node *head;

public:
    Stack()
    {
        this->head = NULL;
    }

    // push
    void push(int data)
    {
        insertAtHead(this->head, data);
    }

    // pop
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        Node *temp = this->head;
        this->head = head->next;
        delete temp;
    }

    int peek()
    {
        if (this->head != NULL)
        {
            return this->head->data;
        }
        else
        {
            cout << "Stack is empty. " << endl;
            return -1;
        }
    }

    // isEmpty
    bool empty()
    {
        if (this->head == NULL)
            return true;
        else
            return false;
    }

    int size()
    {
        Node *temp = head;
        int len = 0;

        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }

        return len;
    }

    ~Stack()
    {
        while (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);

    s.pop();

    cout << s.peek() << endl;

    // cout << s.size();
}