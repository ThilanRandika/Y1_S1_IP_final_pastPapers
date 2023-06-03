#include <stdio.h>

int main()
{
	int i,j;
	char panel[4][4];
	
	for(i=0; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Enter the colour of row:%d column:%d  : ", i, j);
			scanf(" %c", &panel[i][j]);			
		}
		printf("\n");
	}
	
	for(i=0; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf(" %c", panel[i][j]);			
		}
		printf("\n");
	}
	
	printf("\n\nRED BULB positions\n");
	for(i=0; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(panel[i][j]=='R')
			{
				printf("[%d,%d] ", i, j);
			}		
		}
	}

	return 0;
}
