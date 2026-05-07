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

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 1);
}