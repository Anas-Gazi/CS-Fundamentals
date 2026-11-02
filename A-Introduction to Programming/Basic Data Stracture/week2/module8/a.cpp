#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *next;

    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long x;
    while (true)
    {
      cin >> x;
      if(x == -1){
        break;
      }
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    long long mn = head->val, mx = head->val;
    Node *temp = head;

    while (temp != NULL)
    {
        mn = min(mn, temp->val);
        mx = max(mx, temp->val);
        temp = temp->next;
    }

    cout << mx - mn << endl;

    return 0;
}