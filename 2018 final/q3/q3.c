#include <stdio.h>
#include <assert.h>

float calDiscount(int time , float totAmount);
void testCalDscount();
void displayGift(float finalTotal);

int main()
{
	int time,totAmount;
	
	testCalDscount();
	
	printf("Input the time : ");
	scanf("%d", &time);	
	while(time<16 || time>=22)
	{
		printf("Invalid time\n\n");
		printf("Input the time : ");
		scanf("%d", &time);		
	}
	
	printf("Input the total amount : ");
	scanf("%d", &totAmount);
	
	printf("\nFinal Amount : %f\n", totAmount-calDiscount(time,totAmount));
	displayGift(totAmount-calDiscount(time,totAmount));
	
	return 0;
}

float calDiscount(int time , float totAmount)
{
	if(time==16 || time==17 || time==18)
	{
		if(totAmount>=5000)
		{
			return totAmount * 10 /100;
		}
		else if(totAmount>=2500)
		{
			return totAmount * 7 /100;
		}
		else return 0;
	}
	else if(time==20 || time==21)
	{
		if(totAmount>=5000)
		{
			return totAmount * 12 /100;
		}
		else if(totAmount>=2500)
		{
			return totAmount * 9 /100;
		}
		else return 0;
	}
	else return 0;
}

void testCalDscount()
{
	assert(calDiscount(17,10000)==1000);
	assert(calDiscount(20,1000)==0);
}

void displayGift(float finalTotal)
{
	if(finalTotal>=7000)
	{
		printf("Gift : %s", "Packet of milk");
	}
	else if(finalTotal>=5000)
	{
		printf("Gift : %s", "1kg of sugar");
	}
	else if(finalTotal>=3000)
	{
		printf("Gift : %s", "pack of 6 Eggs");
	}
}
