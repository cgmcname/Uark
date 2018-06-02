/* 
 * File:   Queue.h
 * Author: Jon C. Hammer
 *
 * Created on April 1, 2016, 11:22 AM
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <cstdlib>
#include <iostream>
using namespace std;

// Basic Node structure
template <class T>
struct Node
{
    T elem;    // Data
    Node * next; // Pointer to the next node in the chain
};


template <class T>
class Queue
{
public:
    // Constructors
    Queue();
    ~Queue();
    
    // Capacity
    bool empty() const; 
    unsigned int size() const; 
    
    // Element access
    T& front(); 
    const T& front() const; 
    T& back(); 
    const T& back() const; 
    
    // Modification
    void push(const T& x);
    void pop();

    void print();
    
private:
    Node<T> * head;               // The front of the queue
    Node<T> * tail;               // The end of the queue
    unsigned int numElements; // The number of elements in the queue
};




template <class T>
Queue<T>::Queue()
{
     head = NULL;               
     tail = NULL;               
    numElements = 0; 
}
 

template <class T>
Queue<T>::~Queue()
{
    delete  head;
    delete  tail;
    
}
    
    // Capacity
    template <class T>
    bool Queue<T>:: empty() const
    {
        return numElements == 0;
    }
    
    template <class T>
    unsigned int Queue<T>:: size() const
    {
        return numElements;
    }
    
    // Element access
    template <class T>
    T& Queue<T>:: front()
    {
        return head->elem;
    }
    
    template <class T>
    const T& Queue<T>:: front() const
    {
        return head->elem;
    }
    
    template <class T>
    T& Queue<T>:: back()
    {
        return tail->elem;
    }
    
    template <class T>
    const T& Queue<T>:: back() const
    {
        return tail->elem;
    }
    
    // Modification
    
    template <class T>
    void Queue<T>:: push(const T& x)
    {
        
        Node<T> * yo = new Node<T>;
        
        yo->elem = x;
       
        yo->next = NULL;
         
        if (tail != NULL)
        tail->next = yo;
        if (head == NULL)
            head = yo;
        tail = yo;
        numElements++;
        
    }
    
    
    template <class T>
    void Queue<T>:: pop()
    {
        Node<T> * yo = new Node<T>;
        yo = head;
        head = head->next;
        yo = NULL;
        numElements--;
    }

   
  template <class T> 
    void Queue<T>::print()
{
    cout << "[ ";
    for (Node<T> * cur = head; cur != NULL; cur = cur->next)
    {
        cout << cur->elem << " ";
    }
    cout << "]" << endl;
}
    

#endif /* QUEUE_H */

