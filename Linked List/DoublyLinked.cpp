#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

int main()
{
    Node *head = new Node(1);
    Node *n = new Node(2);
    Node *n2 = new Node(3);

    head->next = n;
    n->prev = head;
    n->next = n2;
    n2->prev = n;

    insertAtHead(head, 0);

    insertAtTail(n2, 4);

    insertAtPos(head, n2, 2, 1234);
    print(head);
}