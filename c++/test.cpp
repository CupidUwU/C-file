#include<stdio.h>
#include<stdlib.h>
void welcome();
void moneybalance(double balance);
void moneydeposit(double balance);
void moneywithdraw(double balance);
void exit();
void error();
double balance=20000;
int main()
{
	int pin,option;
	//char repeat;
	welcome();

	checkpoint1:
    while(pin==2468)
   {
     printf("\n");
        printf("ENTER YOUR PIN: ");
        scanf("%d",&pin);
        if(pin!=2468)
        {
        	       	printf("-------------TRY AGAIN-------------");
    	goto checkpoint1;
		}
    	do{
    	 	printf("*************WELCOME, MR ADHIKARI************");
    	 	printf("<1>. CHECK BALANCE\n");
    	 	printf("<2>. DEPOSIT\n");
    	 	printf("<3>. WITHDRAW\n");
    	 	printf("<4>. EXIT\n");
    	 	printf("------------------------------------------------\n");
    	 	printf("Enter your choice: ");
    	 	scanf("%d",&option);
    	 	switch(option)
    	   {
    	 	    case 1:
    	 	    moneybalance(balance);
    	     	break;
    	     	
        	    case 2:
                moneydeposit(balance);
    	 	    break;
    	 	    
    	 	    case 3:
    	        moneywithdraw(balance);
    	 	    break;
    	 	    
			    case 4:
			    exit();
			    break;
			    
			    default:
		        error();
				break;	
            }
        }
    }
}
void welcome()
{
	printf("    ............          .........        ........       \n");
    printf("    ............        ............      ..........      \n");
    printf("    ...               ...               ...        ...    \n");
    printf("    ...               ...               ...        ...    \n");
    printf("    ............      ...               ...        ...     \n");
    printf("    ............      ...               ...        ...    \n");
    printf("    ...               ...               ...        ...    \n");
    printf("    ...               ...               ...        ...    \n");
    printf("    ............        ...........       ..........      \n");
    printf("    ............         ...........       ........       \n");
    printf("\n\t\tWELCOME TO ECO ATM SERVICE\t\t");
    printf("\n ");
    printf("_______________________________________________________________\n");
    
}
void moneybalance()
    {
	  printf("YOUR CURRENT BALANCE IS : $%.2lf",balance);
	  printf("\n");
	}
void moneydeposit()
    {
    	printf("ENTER THE AMOUNT : ");
    	scanf("%lf",&moneydeposit);
    	balance += moneydeposit;
    	printf("YOUR NEW BALANCE IS &%.2lf",balance);
	}
void moneywithdraw()
    {
    	printf("ENTER THE AMOUNT : ");
    	scanf("%lf",&moneywithdraw);
    	balance -= moneywithdraw;
    	printf("YOUR NEW BALANCE IS $%.2lf",balance);
	}
void exit()
{
	printf("*********THANKYOU FOR YOUR SERVICE*******");
}
void error()
{
	printf("******YOU HAVE ENTERED INVALID CHOICE******");
}

