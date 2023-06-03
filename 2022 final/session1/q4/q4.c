#include <stdio.h>

int main(void)
{
	char id[10];
	int ans[4] , i , j , corrAns[4]={1,4,2,3} , count=0;
	
	FILE *cfptr;
	cfptr = fopen("answers.dat" , "w");
	if(cfptr == NULL)
	{
		printf("file does not exist.....");
	}
	
	for (j=1 ; j<=5 ; j++)
	{
		printf("Enter the student ID number : ");
		scanf("%s", id);
		for(i=0 ; i<4 ; i++)
		{
			printf("Enter the answer of question %d : ", i+1);
			scanf("%d", &ans[i]);
		}
		fprintf(cfptr , "%s\t", id);
		for(i=0 ; i<4 ; i++)
		{
			fprintf(cfptr , "%d ", ans[i]);
		}
		fprintf(cfptr , "\n");
		printf("\n");	
	}
	fclose(cfptr);
	
	cfptr = fopen("answers.dat" , "r");
	
	for(j=1 ; j<=5 ; j++)
	{
		fscanf(cfptr , "%s", id);
		for(i=0 ; i<4 ; i++)
		{
			fscanf(cfptr , "%d", &ans[i]);
			if(ans[i] == corrAns[i])
			{
				count++;
			}
		}
		printf("%s \tmarks: %d out of 4\n", id, count);
		count=0;
	}
	fclose(cfptr);
	
	return 0;
}
