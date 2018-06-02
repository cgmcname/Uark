#include <iostream>
#include "Stack.h"


using namespace std;

const int boxes = 100;

Stack::Stack()
{
    buffer = new int[boxes];
    numElements = 0; 
    topIndex = -1;
}

Stack::~Stack()
{
    delete [] buffer;
}

bool Stack:: empty() const
{
    return numElements == 0;
}

unsigned int Stack::size() const
{
    return topIndex;
}

int& Stack::top()
{
    int x = topIndex;
    return x;
}
    
const int& Stack:: top() const
{
    int x = topIndex;
    return x;
}
 
void Stack:: push(const int& x)
{
    buffer[topIndex +1] = x;
    topIndex++;
    numElements++;
}

void Stack:: pop()
{
    int * q;
   q = new int[boxes];
   for (int i = 0; i < (boxes-1); i++)
   {
       q[i]=buffer[i];
   }
   buffer = q;
   
   numElements--; 
   topIndex--; 
}
    
void Stack::print()
{
    cout << "[ ";
    for (int i = 0; i < numElements; ++i)
    {
        cout << buffer[i] << " ";
    }
    cout << "]" << endl;
}