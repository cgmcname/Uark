#include <iostream>
using namespace std;
int main()
{
   // Declare and initialize variables
   int InputValue = 0;
   int TotalValue = 0;
   int CountValue = 0;

   int AverageValue = 0;

   // Read input value
   cout << "Enter input value (or -1 to stop):\n";
   cin >> InputValue;

   // While loop to total up the daily sales
   while (InputValue != -1)
   {
      // Update total and count (FIX)
	cout << "Please type a numerical value now: ";
	cin >> InputValue;
      	CountValue = CountValue + InputValue;
      	TotalValue = TotalValue + 1;
      // Read input value
      cout << "Enter input value (or -1 to stop):\n";
      cin >> InputValue;
   }

   // Calculate and print average value (FIX)
   AverageValue = (CountValue + InputValue)/ TotalValue;
   cout << "Average: " << AverageValue << endl;
   return 0;
}

