#include <stdio.h>

int main(void)
{
	int i , numArr[8] , n , k , num7;
	
	for(i=0 ; i<8 ; i++)
	{
		printf("Enter number %d : ", i+1);
		scanf("%d", &numArr[i]);	
	}
	
	printf("\n");
	
	for(i=0 ; i<8 ; i++)
	{
		printf("%d ", numArr[i]);	
	}
	
	printf("\nEnter n : ");
	scanf("%d", &n);
	
	for(k=1 ; k<=n ; k++)
	{
		num7 = numArr[7];
		for(i=7 ; i>=0 ; i--)
		{
			numArr[i] = numArr[i-1];
		}
		numArr[0] = num7;	
	}
	
	
	for(i=0 ; i<8 ; i++)
	{
		printf("%d ", numArr[i]);	
	}
	
	return 0;
}

