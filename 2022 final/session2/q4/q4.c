#include <stdio.h>
#include <string.h>

int main(void)
{
	int i , num , count=0;
	char name[10] , nameFind[10];
	
	FILE *cfptr;
	cfptr = fopen("Directory.dat","w");
	if (cfptr==NULL)
	{
		printf("File does not exist...");
		return -1;
	}
	
	for(i=1 ; i<=5 ; i++)
	{
		printf("Enter name of person %d : ", i);
		scanf("%s", name);
		
		printf("Enter the telephone number : ");
		scanf("%d", &num);
		
		printf("\n");
		
		fprintf(cfptr , "%s \t%d \n" , name , num);	
	}
	fclose(cfptr);

	cfptr = fopen("Directory.dat","r");
	
	printf("Enter a name to find : ");
	scanf("%s", nameFind);
	
	fscanf(cfptr,"%s%d", name , &num);
	while(!feof(cfptr))
	{
		if(strcmp(nameFind,name)==0)
		{
			printf("telephone number is : %d", num);
			count++;
			break;
		}
		fscanf(cfptr,"%s%d", name , &num);
	}

	if(count==0)
	{
		printf("phone number does not exist..");
	}
	
	return 0;
}
