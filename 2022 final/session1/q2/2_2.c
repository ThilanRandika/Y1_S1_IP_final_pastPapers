#include<stdio.h>

int main(void)
{
	int identityArr[4][4], i , j , fail=0;
	
	for(i=0 ; i<4 ; i++)
	{
		printf("valuse for row %d\n", i+1);
		for(j=0 ; j<4 ; j++)
		{
			printf("Enter element %d : ", j+1);
			scanf("%d", &identityArr[i][j]);		
		}
		printf("\n");
	}
	
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("%d ", identityArr[i][j]);		
		}
		printf("\n");
	}
	
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(i==j)
			{
				if(identityArr[i][j] != 1)
				{
					fail = 1;		
				}	
			}
			else
			{
				if(identityArr[i][j] != 0)
				{
					fail = 1;	
				}	
			}		
		}
	}
	
	if(fail == 0)
	{
		printf("identity matrix..");
	}
	else if(fail == 1)
	{
		printf("not a identity matrix..");
	}
	
	return 0;
}
