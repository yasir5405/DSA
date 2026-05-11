#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (head != NULL)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else
    {
        head = temp;
        tail = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (tail != NULL)
    {

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    else
    {
        head = temp;
        tail = temp;
    }
}

void insertAtPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
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
        insertAtTail(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void reverse(Node *&head, Node *&tail)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    tail = head;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        curr->prev = forward;

        prev = curr;
        curr = forward;
    }
    head = prev;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtPos(head, tail, 1, 1);
    insertAtPos(head, tail, 2, 2);
    insertAtPos(head, tail, 3, 3);
    insertAtPos(head, tail, 4, 4);

    print(head);
    reverse(head, tail);
    print(head);
}