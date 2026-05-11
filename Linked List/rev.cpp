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

int getLength(Node *&head)
{
    int length = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertNode(Node *&head, Node *&tail, int data, int pos)
{
    int len = getLength(head);

    if (pos > len + 1 || pos < 1)
    {
        cout << "Position out of bounds. " << endl;
        return;
    }

    if (pos == 1)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        temp->next = head;
        head = temp;
        return;
    }

    if (pos == len + 1)
    {

        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

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

void reverseResursively(Node *&head, Node *&prev, Node *&curr)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;

    curr->next = prev;
    reverseResursively(head, curr, forward);
}

void reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    reverseResursively(head, prev, curr);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertNode(head, tail, 10, 1);
    insertNode(head, tail, 20, 2);
    insertNode(head, tail, 30, 3);
    insertNode(head, tail, 40, 4);

    print(head);

    reverse(head);
    print(head);
}