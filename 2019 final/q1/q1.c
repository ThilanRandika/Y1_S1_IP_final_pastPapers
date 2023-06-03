#include <stdio.h>

int main(void)
{
	int type , noOfPizzas;
	float cost , discounts;
	char creditCard , size , loyalty , online;
	
	printf("Input the pizza type (1 or 2) : ");
	scanf("%d", &type);
	if(type!=1 && type!=2 && type!=-1)
	{
		printf("invalid type\n");
		printf("Input the pizza type (1 or 2) : ");
		scanf("%d", &type);
	}
	
	while(type!=-1)
	{
		printf("Input size (M or L) : ");
		scanf(" %c", &size);
		if(size!='M' && size!='L')
		{
			printf("invalid size\n");
			printf("Input size (M or L) : ");
			scanf(" %c", &size);	
		}
		
		printf("Enter no. of pizzas : ");
		scanf("%d", &noOfPizzas);
		
		if(type==1)
		{
			if(size=='L')
			{
				cost += 1720.0 * noOfPizzas;
			}
			else if(size=='M')
			{
				cost += 975.0 * noOfPizzas;
			}
		}
		else if(type==2)
		{
			if(size=='L')
			{
				cost += 1820.0 * noOfPizzas;
			}
			else if(size=='M')
			{
				cost += 1000.0 * noOfPizzas;
			}
		}
		
		printf("\n");
		printf("Input the pizza type (1 or 2) : ");
		scanf("%d", &type);
		if(type!=1 && type!=2 && type!=-1)
		{
			printf("invalid type\n");
			printf("Input the pizza type (1 or 2) : ");
			scanf("%d", &type);
		}
	}
	
	
	printf("\nAre you paying by credit card (Y/N) ? ");
	scanf(" %c", &creditCard);
	
	printf("Are you a loyalty customer (Y/N)? ");
	scanf(" %c", &loyalty);
	
	printf("Is this an online order (Y/N)? ");
	scanf(" %c", &online);
	
	if(creditCard=='Y')
	{
		discounts = cost * 20 / 100;
	}
	else if(loyalty=='Y')
	{
		discounts = cost * 15 / 100;
	}
	else if(online=='Y')
	{
		discounts = cost * 5 / 100;
	}
	else
	{
		discounts = 0;
	}
	
	printf("/nBill Amount : %.2f\n", cost);
	printf("Discount : %.2f\n", discounts);
	printf("Net amount : %.2f", cost-discounts);
	
	return 0;
}
