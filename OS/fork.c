/* 
 *
 fork01.c

 Introduce the concept of fork() by asking
 what the following code does.
 
 Compile: gcc filename
 Execute: ./a.out
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int sum;

int main()
{
	int i;

	sum = 0;

	fork();

	for(i=1; i<=5; i++){
		printf("The value of i is %d\n", i);
		fflush(stdout);
		sum +=1;
	}
	printf("The sum is %d\n",sum);
	exit(0);
}

