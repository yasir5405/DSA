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

void insertAtHead(Node *&head, int d)
{
    // Create a new node
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(23);
    Node *n3 = new Node(224);

    n1->next = n2;
    n2->next = n3;

    insertAtHead(n1, 69);

    print(n1);
}