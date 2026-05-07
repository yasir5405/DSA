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

void insertNode(Node *&tail, int elem, int data)
{

    // If linked list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // assumes element is present in the linked list
        Node *curr = tail;

        while (curr->data != elem)
        {
            curr = curr->next;
        }

        // elem found

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int value)
{
    // first elem
    if (tail == NULL)
    {
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // single node list
        if (curr == prev)
        {
            tail = NULL;
        }

        // deleting tail
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = tail;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);

    cout << endl;
}
int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    print(tail);

    deleteNode(tail, 1);
    print(tail);
}