#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;

    tail = temp;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;

    head = temp;
}

int main()
{
    Node *head = new Node(12);
    Node *n1 = new Node(2);

    head->next = n1;

    insertAtHead(head, 69);
    insertAtTail(n1, 69);
    insertAtTail(n1, 69);

    print(head);
}