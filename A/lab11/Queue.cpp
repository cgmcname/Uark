#include <iostream>

#include "Queue.h"




Queue::Queue()
{
     head = NULL;               
     tail = NULL;               
    numElements = 0; 
}
 
    
Queue::~Queue()
{
    delete [] head;
    delete [] tail;
    
}
    
    // Capacity
    bool Queue:: empty() const
    {
        return numElements == 0;
    }
    unsigned int Queue:: size() const
    {
        return numElements;
    }
    
    // Element access
    int& Queue:: front()
    {
        return head->elem;
    }
    const int& Queue:: front() const
    {
        return head->elem;
    }
    int& Queue:: back()
    {
        return tail->elem;
    }
    
    const int& Queue:: back() const
    {
        return tail->elem;
    }
    
    // Modification
    void Queue:: push(const int& x)
    {
        Node * yo = new Node;
        yo->elem = x;
        yo->next = NULL;
        if (tail == NULL)
        tail->next = yo;
        tail = yo;
    }
    
    void Queue:: pop()
    {
        Node * yo = new Node;
        yo = head;
        head = head->next;
        yo = NULL;
        
    }

   void Queue::print()
{
    cout << "[ ";
    for (Node* cur = head; cur != NULL; cur = cur->next)
    {
        cout << cur->elem << " ";
    }
    cout << "]" << endl;
}
    