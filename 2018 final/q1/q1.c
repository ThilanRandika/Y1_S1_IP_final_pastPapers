#include <stdio.h>

int main()
{
	char type;
	float HosManagementTotal , marketingTotal , financeTotal;
	int HosManagementCount=0 , marketingCount=0 , financeCount=0 , totalCount=0;
	
	printf("Enter type (press t for terminate) : ");
	scanf("%c", &type);
	
	while(totalCount<=100)
	{
		if(type=='H' || type=='h')
		{
			printf("course : Dip in Hospitality Management\t\t Registration Fee: 1500.00\n\n");
			HosManagementTotal += 1500.00;
			HosManagementCount++;
			totalCount++;
		}
		
		else if(type=='M' || type=='m')
		{
			printf("course : Dip in Marketing\t\t Registration Fee: 2000.00\n\n");
			marketingTotal += 2000.00;
			marketingCount++;
			totalCount++;	
		}
		
		else if(type=='F' || type=='f')
		{
			printf("course : Dip in Finance\t\t Registration Fee: 2500.00\n\n");
			financeTotal += 2500.00;
			financeCount++;
			totalCount++;
		}
		
		else if(type=='t' || type=='T')
		{
			break;
		}
		
		else
		{
			printf("Invallid input...\n\n");
		}
		
		printf("Enter type  : ");
		scanf(" %c", &type);		
	}
	
	printf("course\t\t\tNo of students registerd\t\tTotal registration fee\nHospitality Management\t%d\t\t\t\t\t%.2f\nDip in Marketing\t%d\t\t\t\t\t%.2f\nDip in Finance\t\t%d\t\t\t\t\t%.2f", HosManagementCount , HosManagementTotal , marketingCount , marketingTotal , financeCount , financeTotal);
	
	return 0;
}
