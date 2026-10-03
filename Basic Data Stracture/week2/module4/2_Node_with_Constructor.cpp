#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
     int val;
     Node* next;

     Node(int val){ // constructor to initialize the node with a value and set the next pointer to NULL
      this->val = val;
      this->next = NULL; 
     }
};


int main()
{
    Node a(10) ,b(20) ,c(30) ;// creating three nodes a, b, and c with values 10, 20, and 30 respectively


    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val <<" " <<a.next->val << " " << a.next->next->val << endl;

       return 0;
}
// This code defines a simple Linked List using a Node class with a constructor. Each Node contains an integer value (val) and a pointer to the next Node (next). The constructor initializes the val and sets next to NULL. In the main function, three Node objects (a, b, and c) are created using the constructor, and their values are assigned. The next pointers are set up to link the nodes together, forming a linked list. Finally, the values of the nodes are printed in sequence by accessing the next pointers.