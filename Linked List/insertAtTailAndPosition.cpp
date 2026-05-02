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

void deleteNode(int pos, Node *&head)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;

    int count = 1;

    while (count < pos && curr != NULL)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr == NULL)
    {
        cout << "Position out of bounds. " << endl;
        return;
    }

    prev->next = curr->next;
    delete curr;
}

int main()
{
    Node *head = new Node(12);
    Node *n1 = new Node(2);

    head->next = n1;

    insertAtPosition(n1, head, 3, 123);

    deleteNode(3, head);
    print(head);
}