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
    cout << endl;
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

void insertAtPosition(Node *&tail, Node *&head, int pos, int data)
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

    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void reverseList(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }
    head = prev;
}

int main()
{
    Node *head = new Node(1);
    Node *n = new Node(2);
    Node *n1 = new Node(3);
    Node *n2 = new Node(4);
    Node *n3 = new Node(5);
    Node *tail = new Node(6);

    head->next = n;
    n->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = tail;

    print(head);

    reverseList(head);
    print(head);
}