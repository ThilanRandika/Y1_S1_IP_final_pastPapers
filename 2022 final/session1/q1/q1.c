#include <stdio.h>

int main(void)
{
	int lines , i , j;
	char char1 , char2;
	
	printf("Enter character 1 : ");
	scanf("%c", &char1);
	
	printf("Enter character 2 : ");
	scanf(" %c", &char2);
	
	printf("Enter number of lines : ");
	scanf("%d", &lines);
	
	for(i=1 ; i<=lines ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			if(j%2==1)
			{
				printf("%c", char1);
			}
			else
			{
				printf("%c", char2);
			}
		}
		printf("\n");
	}
	
	return 0;
}
