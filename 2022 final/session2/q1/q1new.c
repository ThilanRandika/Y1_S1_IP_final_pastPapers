#include <stdio.h>
#include <string.h>

int main(void)
{
	int num , i;
	char forward[4] , backward[4];
	
	printf("enter a 4 digits number : ");
	scanf("%d", &num);
	while(num<999 || num>9999)
	{
		printf("Invalid number\n\nenter a 4 digits number : ");
		scanf("%d", &num);
	}
	
	
	forward[3] = num % 10;
	for(i=2 ; i>=0 ; i--)
	{
		num = num / 10;
		forward[i] = num%10;
		
		backward[i] = forward[i-3];
	}
	backward[3] = forward[1];

//	for(i=0 ; i<4 ; i++)
//	{
//		backward[i] = forward[3-i];
//	}
	
	
	if(strcmp(forward,backward)==0)
	{
		printf("It is a palindrome ");
	}
	else
	{
		printf("It is not a palindrome ");
	}
	
	
	
	return 0;
}
