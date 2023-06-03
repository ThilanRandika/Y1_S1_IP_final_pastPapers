#include <stdio.h>

int main(void)
{
	int fib[10]={0,1} , i;
	
	for(i=2 ; i<10 ; i++)
	{
		fib[i] = fib[i-2] + fib[i-1];
	}
	
	for(i=0 ; i<10 ; i++)
	{
		printf("%d ", fib[i]);
	}
	
	return 0;
}
