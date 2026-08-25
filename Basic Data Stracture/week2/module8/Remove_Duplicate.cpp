#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;

        insert_tail(head, tail, x);
    }

    Node *current = head;

    while (current != NULL)
    {
        Node *temp = current;

        while (temp->next != NULL)
        {
            if (temp->next->val == current->val)
            {
                Node *deleteNode = temp->next;
                temp->next = temp->next->next;

                if (deleteNode == tail)
                    tail = temp;

                delete deleteNode;
            }
            else
            {
                temp = temp->next;
            }
        }

        current = current->next;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}