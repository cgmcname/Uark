#include <iostream>
#include <string>
using namespace std;

int main()
{
int n = 10;
int a[n];
int max_sum = 0;
int sum;
int j 


	for (int i = 0; i< n; i++) 
	{
		sum =0;
		for (int j = i; j < n; k+)
		{
			sum = sum + a[j];
		}

		if (sum > max_sum)
			max_sum = sum;
	}

cout << max_sum << endl;

return 0;
}
