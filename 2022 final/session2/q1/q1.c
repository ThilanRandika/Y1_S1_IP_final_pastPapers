#include <stdio.h>
#include <string.h>

int main(void)
{
	char numStr[10] , backword[10];
	int i;
	
	printf("Enter a 4 digit number : ");
	scanf("%s", numStr);
	
	while(strlen(numStr)!=4)
	{
		printf("Invalid Number \n\n");
		printf("Enter a 4 digit number : ");
		scanf("%s", numStr);
	}
	
	for(i=0 ; i<4 ; i++)
	{
		backword[3-i] = numStr[i];
	}
	
	if(strcmp(backword,numStr)==0)
	{
		printf("It is palindrome .");
	}
	else
	{
		printf("It is not palindrome .");
	}
	
	return 0;
}
