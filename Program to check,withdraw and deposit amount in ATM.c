#include<stdio.h> 
int main()
{
	int choice,ATM,b_l,c_w,c_d,pin,amount=50000,end,withdrawl_cash=0,limit=200000,deposit=0;
	
	printf("\nEnter your pin: ");
	scanf("%d",&pin);
if(pin==1234)
{
	
do
{
	printf("\nChoose from the options below: ");
	printf("\n 1)Balance checking");
	printf("\n 2)Cash Withdrawl");
	printf("\n 3)Cash Deposit");
	printf("\n 4)EXIT\n");
	scanf("%d",&choice);
	
	if(choice<1||choice>4)
	{
		printf("\nWRONG INPUT");
	}
	
	else if(choice==1)
	{
		printf("\nYour balance is : %d ",amount+deposit-withdrawl_cash);
	}
	
	else if(choice==2)
	{
		printf("\nHow much cash you want to withdrwal: ");
		scanf("%d",&withdrawl_cash);
		if(withdrawl_cash>50000)
		{
			printf("\nYou dont have sufficient balance for this transaction !");
		}
		else
		{
			printf("\nCash withdrawl is completed successfully");
		}	
	}
	
	else if(choice==3)
	{
		printf("\nHow much cash you want to deposit: ");
		scanf("%d",&deposit);
		if(deposit>=limit||deposit<1)
		{
			printf("\nYou can not deposit this amount!");
		}
		else
		{
			printf("\nAmount deposited successfully");
		}
	}
	
	else if(choice==4)
	{
		break;
	}
}

while(choice!=4);
}

else 
printf("\nWRONG PIN");

}