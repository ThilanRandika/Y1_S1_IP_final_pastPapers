#include <stdio.h>

int main(void)
{
	int userRating[5] , rate , i , j;
	
	for(i=0 ; i<5 ; i++)
	{
		userRating[i]=0;
	}
	
	printf("Enter ratings: ");
	scanf("%d", &rate);
	
	while(rate!=-99)
	{
		if(rate>5 || rate<1)
		{
			printf("Enter ratings: ");
			scanf("%d", &rate);
			continue;
		}
		userRating[rate-1]++;
		
		printf("Enter ratings: ");
		scanf("%d", &rate);	
	}
	
	for(i=0 ; i<5 ; i++)
	{
		printf("%d\t", i+1);
		for(j=1 ; j<=userRating[i] ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
