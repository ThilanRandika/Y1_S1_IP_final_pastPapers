#include <stdio.h>
#include <assert.h>

float calcRemainingFuel(int type, float usedFuelQuota);
float calcFuelcost(int type, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(void)
{
	int type;
	float used , remaining , cost;
	
	assert(calcRemainingFuel(1,4)==1);
	assert(calcRemainingFuel(3,20)==0);
	
	printf("enter the vehicle type : ");
	scanf("%d", &type);
	while(type!=-1)
	{	
		printf("enter used fuel quota : ");
		scanf("%f", &used);
		
		remaining	= calcRemainingFuel(type,used);
		cost 		= calcFuelcost(type,used);
		displayDetails(type,used,remaining,cost);
		
		printf("\n\nenter the vehicle type : ");
		scanf("%d", &type);	
	}
	
	return 0;
}

float calcRemainingFuel(int type, float usedFuelQuota)
{
	if (type == 1)
	{
		return 5.0 - usedFuelQuota;
	}
	else if (type == 2 || type == 3)
	{
		return 20.0 - usedFuelQuota;
	}
	else if (type == 4)
	{
		return 30.0 - usedFuelQuota;
	}
}

float calcFuelcost(int type, float usedFuelQuota)
{
	if (type == 1 || type == 2 || type == 4)
	{
		return usedFuelQuota * 370.0;
	}
	else if (type == 3)
	{
		return usedFuelQuota * 510.0;
	}
}

void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost)
{
	printf("Vehicle type \tQuota used \tQuota remaining \tFuel cost\n");
	printf("%d \t\t%.2f \t\t%.2f \t\t\t%.2f", vType, usedFuelQuota, remainingQuota, cost);
}
