#include <stdio.h>

int main()
{
	int empNo , empNoFile=0  , i , total=0;
	char name[10] , att[7];
	
	FILE *cfptr;
	
	cfptr = fopen("attendance.dat" , "r");
	
	if(cfptr == NULL)
	{
		printf("file does not exist..");
		return -1;
	}
	
	printf("Enter a employee number : ");
	scanf("%d", &empNo);
	
	fscanf(cfptr , "%d %s %s" , &empNoFile , name , att);
	
	while(!feof(cfptr))
	{
		if(empNoFile == empNo){
			break;
		}
		fscanf(cfptr , "%d  %s %s" , &empNoFile, name , att);	
	}
	
	fclose(cfptr);
	
	for(i=0 ; i<7 ; i++)
	{
		if(att[i]=='1')
		{
			total++;
		}
	}
	
	
	printf("Total attendents of employee %d is : %d", empNo , total);
	
	return 0;
}
