#include <iostream>
#include <iomanip>  // needed for setw
using namespace std;
int main()
{
   int size = 12;
   int total = 0;
   int total2 =0;
   int formula;
   for (int outer = 1; outer <= size; outer++)
   {

	
	
      for (int inner = 1; inner <= size; inner++)
      {
	formula = (inner * outer);
         cout << setw(5)<< formula;
	
	
      }
	
	cout << endl;
   }
   return 0 ;
}

