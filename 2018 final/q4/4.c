#include <stdio.h>

int main()
{
	int no , i , j;
	char name[10];
	int att[7];
	
	FILE *cfptr;
	
	cfptr = fopen("attendance.dat" , "w");
	
	if(cfptr == NULL)
	{
		printf("file load failed......");
		return -1;
	}
	
	
	for(i=1 ; i<=2 ; i++)
	{
		printf("Enter emp no: ");
		scanf("%d", &no);
		
		printf("Enter emp name: ");
		scanf("%s", &name);
		
		fprintf(cfptr , "%d\t%s\t", no, name);
		
		for(j=0 ; j<7 ; j++)
		{
			printf("Enter Attendents of day %d: ", j+1);
			scanf("%d", &att[j]);
			fprintf(cfptr , "%d", att[j]);
		}
		printf("\n\n");
		fprintf(cfptr , "\n");
	}
	
	fclose(cfptr);
	return 0;
}
