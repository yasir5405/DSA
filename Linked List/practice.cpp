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

void print(Node *&node)
{
    Node *temp = node;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

int main()
{
    Node *n1 = new Node(29);
    Node *n2 = new Node(24);

    n1->next = n2;

    insertAtHead(n1, 69);

    print(n1);
}