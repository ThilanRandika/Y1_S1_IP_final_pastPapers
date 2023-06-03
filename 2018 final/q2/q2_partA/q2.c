#include <stdio.h>
#include <string.h>

struct transactions
{
	int accNo;
	char *name;
	char type;
	double amount;
};

int main()
{
	int i;
	double totalDeposit = 0 , totalWithdraw=0 , maxD=0 , minW=99999.00;
	char maxDName[10], minWName[10];
	
	struct transactions c[5] = {{8254,"Viraj",'D',500.00} , {1267,"Sudesh",'D',1000.00} , {7823,"Ama",'W',350.00} , {9023,"Danuli",'W',250.00} , {4587,"Hiran",'D',750.00} };
	
	for(i=0;i<5;i++)
	{
		if(c[i].type=='D')
		{
			totalDeposit += c[i].amount;
			if(c[i].amount > maxD)
			{
				maxD = c[i].amount;
				strcpy(maxDName , c[i].name);
			}
		}
		else if(c[i].type=='W')
		{
			totalWithdraw += c[i].amount;
			if(c[i].amount < minW)
			{
				minW = c[i].amount;
				strcpy(minWName , c[i].name);
			}
		}
	}
	
	printf("Total deposit amount is : %.2lf\n", totalDeposit);
	printf("Total withdrawal amount is : %.2lf\n", totalWithdraw);
	printf("Name of the customer with the maximum deposit amount: %s\n", maxDName);
	printf("Name of the customer with the minimum withdrawal amount: %s\n", minWName);
	
	return 0;
}

