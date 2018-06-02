/* 
 * File:   Stack.h
 * Author: Jon C. Hammer
 *
 * Created on April 1, 2016, 11:24 AM
 */

#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <class T>
class Stack
{
public:
    // Constructors
    Stack();
    ~Stack();
    
    // Capacity
    bool empty() const; 
    unsigned int size() const; 
    
    // Element access
    T & top(); 
    const T & top() const; 
    
    // Modification
    void push(const int& x); 
    void pop();
    
    void print();
    
private:
    T * buffer;              // The dynamically-allocated array that holds the stack
    unsigned int numElements; // The number of elements currently on the stack
    unsigned int topIndex;    // The index of the top of the stack (0 initially)
};






const int boxes = 100;

template <class T>
Stack<T>::Stack()
{
    buffer = new T[boxes];
    numElements = 0; 
    topIndex = -1;
}

template <class T>
Stack<T>::~Stack()
{
    delete [] buffer;
}


template <class T>
bool Stack<T>:: empty() const
{
    return numElements == 0;
}

template <class T>
unsigned int Stack<T>::size() const
{
    return topIndex;
}

template <class T>
T& Stack<T>::top()
{
    T x = topIndex;
    return x;
}

template <class T>
const T& Stack<T>:: top() const
{
    int x = topIndex;
    return x;
}
 

template <class T>
void Stack<T>:: push(const int& x)
{
    buffer[topIndex +1] = x;
    topIndex++;
    numElements++;
}


template <class T>
void Stack<T>:: pop()
{
    T * q;
   q = new T[boxes];
   for (int i = 0; i < (boxes-1); i++)
   {
       q[i]=buffer[i];
   }
   buffer = q;
   
   numElements--; 
   topIndex--; 
}


template <class T>
void Stack<T>::print()
{
    cout << "[ ";
    for (int i = 0; i < numElements; ++i)
    {
        cout << buffer[i] << " ";
    }
    cout << "]" << endl;
}

#endif /* STACK_H */

