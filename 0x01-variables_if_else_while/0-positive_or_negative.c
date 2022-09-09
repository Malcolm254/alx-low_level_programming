#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - print if the number is positive,zero or negative
*
*Description: use the main function
*program prints "programming is positive,zero or negative"
*Return:0
*/
int main(void)
{
int n;

srand(time(0));
n=rand() - RAND_MAX/2;
  /*your code goes here*/
if (n > 0)
{
	printf("%i is a positive \n", n);
}
else if ( n==o )
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative", n);
}
return (0);
}
