#include <iostream>
using namespace std;

int main()
{
   // Declare array of integers
   int DATA_SIZE = 20;
   double data[DATA_SIZE];
   int seed = 37; 
   double mean;
   float total = 0.;
   double formula = 0;
   double total2 = 0;
   double variance;
	//for (int index = 0; index < DATA_SIZE; index++)
      	//cout << data[index] << " ";
   	//cout << endl;
   // Initialize array
   for (int index = 0; index < DATA_SIZE; index++){
      data[index] = seed % 100;
      seed = seed + 37;
   }
	
	for (int index = 0; index < DATA_SIZE; index++){
	total += data[index];
}
       mean = total/DATA_SIZE;
 	
	for (int index = 0; index < DATA_SIZE; index++){
	formula = ((data [index]-mean)*(data[index]-mean));
	total2 += formula;
	data[index]= data[index] + 1;
}
	variance = total2/DATA_SIZE;
	cout << variance << endl;
	

	
   // Print array
   //for (int index = 0; index < DATA_SIZE; index++)
      	//cout << data[index] << " ";
   	//cout << endl;

   return 0 ;
}
