#include <stdio.h>

int main(void)
{
	int ratings[3][4] , i , j , total=0 ;
	float avg[3] , highestAvg=0;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Movie %d....\n", i+1);
		for(j=0 ; j<4 ; j++)
		{
			printf("Enter rating of reviewer %d : ", j+1);
			scanf("%d", &ratings[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("%d\t", ratings[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAverage ratings...\n");
	for(i=0 ; i<3 ; i++)
	{
		printf("movie%d\t", i+1);
		for(j=0 ; j<4 ; j++)
		{
			total+=ratings[i][j];
		}
		avg[i] = total / 4;
		printf("%.1f\n",avg[i]);
	}
	
	for(i=0 ; i<3 ; i++)
	{
		if(highestAvg < avg[i])
		{
			highestAvg = avg[i];
		}
	}
	
	for(i=0 ; i<3 ; i++)
	{
		if(highestAvg==avg[i])
		{
			printf("\n movie with highest Average : movie%d", i+1);
		}
	}
	
	return 0;
}
