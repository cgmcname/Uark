// Example program
#include <iostream>
#include <string>

using namespace std;

void swap (int a, int b)
{
   int temp=a;
   a=b;
   b=temp;
}
 
 
int distance (int a, int b)
{
    
   if (b > a) 
      swap (a,b);   
 
  return (a-b);
}

int main(void)
{
  int var1[4] ={4, 7, 12, 5};
  int var2[4]= {15, 3, 6, 14};
  int result[4]={0};
 
  for (int i=0 ; i< 4; i++)
  {
    result[i] = distance (var1[i], var2[i]);
    cout << result[i] << endl;
  }
  
  return 0;
}

