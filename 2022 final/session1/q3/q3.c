#include <stdio.h>
#include <assert.h>

float calclnterest(int FDType,float depositAmount);
float calcTax(float annuallnterest);
void displayDetails(float interest, float taxAmount);

int main(void)
{
	int type;
	float amount;
	
	assert(calclnterest(1,1000)==160.0);
	assert(calclnterest(2,1000)==150.0);
	
	printf("Enter deposit type : ");
	scanf("%d", &type);
	while(type != -1)
	{
		printf("Enter deposit amount : ");
		scanf("%f", &amount);
		displayDetails(calclnterest(type,amount) , calcTax(calclnterest(type,amount)));
		
		printf("Enter deposit type : ");
		scanf("%d", &type);	
	}
	
	return 0;
}

float calclnterest(int FDType,float depositAmount)
{
	if(FDType==1)
	{
		return depositAmount * 16.0 / 100.0;
	}
	else if(FDType==2)
	{
		return depositAmount * 15.0 / 100.0;
	}
	else if(FDType==3)
	{
		return depositAmount * 15.5 / 100.0;
	}
	else if(FDType==4)
	{
		return depositAmount * 17.5 / 100.0;
	}
	else
	{
		return 0;
	}
}

float calcTax(float annuallnterest)
{
	return annuallnterest * 5.0 /100.0;
}

void displayDetails(float interest, float taxAmount)
{
	printf("Armual Interest \tTax amount \tAmountpayable\n%.2f \t\t\t%.2f \t\t%.2f\n\n", interest, taxAmount, interest-taxAmount);
	if(interest==0)
	{
		printf("Try again.....\n\n");
	}
}
