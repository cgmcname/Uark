#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
   double num, root, error;
   cout << "Enter number:\n";
   cin >> num;

   root = sqrt(num);
   cout << "sqrt(" << num << ")= " << root << endl;

   root = pow(num, 0.5);
   cout << "pow(" << num << ",1/2)= " << root << endl;
   error = num - root * root;
   cout << "error= " << error << endl << endl;

   root = cbrt(num);
   cout << "cbrt(" << num << ")= " << root << endl;

   root = pow(num, 1.0/3.0);
   cout << "pow(" << num << ",1/3)= " << root << endl;
   error = num - root * root * root;
   cout << "error= " << error << endl << endl;

   return 0;

}
