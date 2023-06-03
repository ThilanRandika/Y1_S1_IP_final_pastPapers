#include <stdio.h>

int main(void)
{
	int numInput , num , exist=0;
	char nameInput[10] , name[10];
	
	FILE *cfptr;
	cfptr = fopen("loyalty.dat" , "r");
	if (cfptr == NULL)
	{
		printf("file does not exist..");
		return -1;
	}
	
	printf("Enter the name : ");
	scanf("%s", nameInput);
	
	printf("Enter the loyalty number : ");
	scanf("%d", &numInput);
	
	fscanf(cfptr , "%d%s", &num , name);
	while(!feof(cfptr))
	{
		if(num == numInput)
		{
			exist = 1;
			break;
		}
		fscanf(cfptr , "%d%s", &num , name);	
	}
	fclose(cfptr);
	
	if(exist != 1)
	{
		cfptr = fopen("loyalty.dat" , "a");
		fprintf(cfptr , "\n%d %s", numInput , nameInput);
		fclose(cfptr);
	}
	
	return 0;
}

