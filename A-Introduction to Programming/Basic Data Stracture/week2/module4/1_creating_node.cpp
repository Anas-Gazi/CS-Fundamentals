#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
     int val; // integer value stored in the node
     Node* next; // pointer to the next node in the linked list
};


int main()
{
    Node a,b,c;
    a.val =10;
    b.val= 20;
    c.val=30;

    a.next = &b; // a's next pointer points to b, &b is the address of node b
    b.next = &c; // b's next pointer points to c
    c.next = NULL; // c's next pointer is NULL, indicating the end of the linked list

    cout << a.val <<" " <<a.next->val << " " << a.next->next->val << endl; // prints the values of the nodes in the linked list: 10 20 30, 

       return 0;
}
// This code defines a simple linked list using a Node class. Each Node contains an integer value (val) and a pointer to the next Node (next). In the main function, three Node objects (a, b, and c) are created and their values are assigned. The next pointers are set up to link the nodes together, forming a linked list. Finally, the values of the nodes are printed in sequence by accessing the next pointers.