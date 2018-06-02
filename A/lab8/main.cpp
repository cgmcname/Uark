/* 
 * File:   main.cpp
 * Author: wingning
 *
 * Basic linked list
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Data element type, for now it is int, but we could change it to anything else
// by just changing this line
typedef int element_type;

// Basic Node structure
struct Node
{
    element_type elem;  // Data
    Node * next;        // Pointer to the next node in the chain
    Node * prev;        // Pointer to the previous node in the chain
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
        cout << "Node "          << setw(3) << i             << "   "
             << "Elem: "         << setw(3) << current->elem << "   "
             << "Address: "      << setw(8) << current       << "   "
             << "Next Address: " << setw(8) << current->next << "   "
             << "Prev Address: " << setw(8) << current->prev << "   "
             << endl;
        current = current->next;
        i++;
    }
    
    cout << "------------------------------------------------------------------------------------------" << endl;
}

// Print details about the given list in reverse order, one Node per line
void reverseShow(Node* tail)
{
  Node* current = tail;
    
    if (current == NULL)
        cout << "It is an empty list!" << endl;
    
    int i = 0;
    while (current != NULL) 
    {
        cout << "Node "          << setw(3) << i             << "   "
             << "Elem: "         << setw(3) << current->elem << "   "
             << "Address: "      << setw(8) << current       << "   "
             << "Next Address: " << setw(8) << current->next << "   "
             << "Prev Address: " << setw(8) << current->prev << "   "
             << endl;
        current = current->prev;
        i++;
    }
    
    cout << "------------------------------------------------------------------------------------------" << endl;  // TODO Implement in step 1.
}

int main() 
{
    const int size = 15;

    // Create the first node
    Node* head = new Node();
    head->elem = 0;
    head->prev = NULL;
    head->next = NULL;
    Node* tail = head;

    // Create a doubly linked list from the nodes
    for (int i = 1; i <= size; i++)
    {
        // Create the new node
        Node* node = new Node();
        node->elem = i;
        node->prev = tail;
        node->next = NULL;
        
        // Fold it into the list
        tail->next = node;
        
        // Move the tail
        tail = node;
    }
    show(head);
    reverseShow(tail);

    // TODO: Your code for steps 2-7 here.
    //step 2
      Node * node = new Node;
      node->elem = 100 ;
      head->prev = node;
      node->next = head;
      head = node;
      show(head);
      reverseShow(tail);
    //step 3
      Node * s3node = new Node;
      s3node->elem = -99 ;
      s3node->prev = tail;
      tail->next = s3node;
      tail = s3node;
      //show(head);
      
    show(head);
    reverseShow(tail);
    
    //step 4
    Node* Mcurrent = head;
    head = head->next;
    head->prev = NULL;
    delete Mcurrent;
    
    show(head);
   reverseShow(tail);
    
    //step 5
    Node* M5current = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete M5current;
    
    show(head);
     reverseShow(tail);
    
    //step 6
    Node* tmp = head;
    Node* tmp2; 
    while (tmp->next != NULL)
    {
        if (tmp->elem == 12)
        {
        tmp2 = tmp;
        tmp = tmp->prev;
        
        tmp->next = tmp->next->next;
        tmp = tmp->next;
        tmp->prev = tmp->prev->prev;
        }
        tmp = tmp->next;
    }
    delete tmp2;
      show(head);
     reverseShow(tail);
    
      // Clean up
    Node* current = head;
    while (current != NULL)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = NULL;
    tail = NULL;
    
    return 0;
}
