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
    int T;
    cin >> T;

    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        long long x;
        while (true)
        {
            cin >> x;
            if (x == -1)
                break;

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

        long long target;
        cin >> target;

        Node *temp = head;
        int index = 0;
        int ans = -1;

        while (temp != NULL)
        {
            if (temp->val == target)
            {
                ans = index;
                break;
            }
            temp = temp->next;
            index++;
        }

        cout << ans << endl;
    }

    return 0;
}