#include <stdio.h>
#include <assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main(void)
{
	float amount , rate;
	int i;
	
	testTotalAmount();
	
	printf("Enter Initial Amount to be invested : ");
	scanf("%f", &amount);
	
	printf("Enter Annual interest Rate(in percentage) : ");
	scanf("%f", &rate);
	
	for(i=1 ; i<=5 ; i++)
	{
			printf("Amount after year %d : %f\n", i , findTotalAmount(rate , amount));
			amount = findTotalAmount(rate , amount);
	}
	
	return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
	if(amount>1000000.00)
	{
		return amount * (interestRate+0.5)/100.0;
	}
	else
	{
		return amount * interestRate /100.0;
	}
}

float findTotalAmount(float interestRate, float amount)
{
	return amount + calcAnnualInterest(interestRate , amount);
}

void testTotalAmount()
{
	assert(findTotalAmount(10.0 , 5000.00) == 5500.00);
	assert(findTotalAmount(10.0 , 10000000.00) == 11050000.00);
}
