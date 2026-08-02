#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
     int val;
     Node* next; // pointer to next node

     Node(int val){ // constructor to initialize the node with a value
      this->val = val; // initialize the value of the node
      this->next = NULL;// initialize the next pointer to NULL
     }
};


int main()
{
   Node* head = new Node(10); // create a new node with value 10 and assign it to head
   Node* a = new Node(20); // create a new node with value 20 and assign it to a
   Node* b = new Node(20);
   Node* c = new Node(40);

   head->next = a; // link the head node to the next node a
   a->next = b; // link the node a to the next node b
    b->next = c;

    Node* tmp = head;
    while (tmp != NULL) // loop through the linked list until head is NULL
    {
      cout << tmp->val << endl;
      tmp = tmp->next; // move to the next node in the linked list
    }
    

       return 0;
}
// this code creates a simple linked list with four nodes and prints the values of each node in the list. The output will be:
// 10 
// 20
// 20
// 40
// The code uses a while loop to traverse the linked list and print the values of each node until it reaches the end of the list (when head is NULL).
