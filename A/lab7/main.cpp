
/* 
 * File:   main.cpp
 * Author: wingning
 *
 * Basic linked list
 */

#include <cstdlib>
#include <iostream>

using namespace std;

// Data element type, for now it is int, but we could change it to anything else
// by just changing this line
typedef int element_type;

// Basic Node structure
struct Node
{
    element_type elem;  // Data
    Node * next;        // Pointer to the next node in the chain
    Node * prev;        // Pointer to the previous node in the chain, not used for lab 7
};

// Print details about the given list, one Node per line
void show(Node* head)
{
    Node* current = head;
    
    if (current == NULL)
        cout << "It is an empty list!" << endl;
    
    int i = 0;
    while (current != NULL) 
    {
        cout << "Node " << i << "\tElem: " << '\t' << current->elem << "\tAddress: " << current << "\tNext Address: " << current->next << endl;
        current = current->next;
        i++;
    }
    
    cout << "----------------------------------------------------------------------" << endl;
}

int main() 
{
    const int size = 15;

    Node* head    = new Node();
    Node* current = head;
    Node* temp;
    // Create a linked list from the nodes
    for (int i = 0; i < size; i++)
    {
        current->elem = i;
        current->next = new Node();
        current       = current->next;
    }
    
    // Set the properties of the last Node (including setting 'next' to NULL)
    current->elem = size;
    current->next = NULL;
    //show(head);

    // TODO: Your Code Here
    current = head;
    head = head->next;
    delete current;
    
   // show(head);
    
    current = head;
    if (head == NULL)
        delete head;
    while (current->next != NULL)
    {
        temp = current;
        current = current->next;
        
    }
     
    temp->next = NULL;
    delete current;
     // show(head); 
      
      temp = head;
      current = head;
      for (int i = 0; i < 10; i++)
    {
       Node * n = new Node;
       n->elem = i;
       n->next = head;
       head = n;
               
       
    }
      
      current = head;
      while (current->next != NULL)
      {
        if (current->elem == 7)
        {
            for (int i =0; i<10; i++)
            {
           Node * n = new Node;
           n->next = current->next;
           current->next = n;
           current = n;
            }
            break;
      
        }
        current->next = NULL;
      }  
      show(head); 
      
    // Clean up
    current = head;
    while (current != NULL)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
    
    return 0;
}
