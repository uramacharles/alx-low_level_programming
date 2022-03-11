#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - This file is for negative or positive test
*
* Return: Always 0 (Sucess)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%u is positive\n", n);
	}
	else if(n = 0){
		printf("%u is Zero\n", n);
	}
	else{
		printf("%u is negative\n", n);
	}
	return(0)
}
