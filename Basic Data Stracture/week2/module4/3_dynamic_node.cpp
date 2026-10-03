#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
     int val;
     Node* next;

     Node(int val){
      this->val = val;
      this->next = NULL;
     }
};


int main()
{
   Node* head = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(20);

   head->next = a;
   a->next = b;
    cout << head->val <<" "<< head->next->val <<endl;

       return 0;
}
// This code defines a simple linked list using a Node class with a constructor. Each Node contains an integer value (val) and a pointer to the next Node (next). The constructor initializes the val and sets next to NULL. In the main function, three Node objects (head, a, and b) are created using dynamic memory allocation (new operator), and their values are assigned. The next pointers are set up to link the nodes together, forming a linked list. Finally, the values of the first two nodes are printed in sequence by accessing the next pointers.
