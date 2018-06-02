

#include <cstdlib>
#include <iostream>

using namespace std;

int factorial(int n);
int fibonacci(int n);
void sort (int * seq, int size);
void display(int * seq, int size);

int main(int argc, char** argv) 
{
    int  array[] =  {8, 4, 2, 3, 9};
    
    cout << "fac = " << factorial(7) << endl;
    cout << "fib = " << fibonacci(5) << endl;
    
    
    sort(array, 5); 
    display(array, 5);
    
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
       return fibonacci(n-1) + fibonacci(n-2);
    
}

void sort (int * seq, int size)
{
    int tmp;
    if (size == 1)
        return;
    for(int i = 0; i < size; i++)
        if (seq[i] < seq[0])
        {
            tmp = seq[i];
            seq[i] = seq[0];
            seq[0] = tmp;
        }
    
    sort(seq+1, size-1);
        
}

void display(int * seq, int size)
{
    for (int i = 0; i < size; i++)
        cout << seq[i] << ", ";
    
    
    cout << endl;
    
}
