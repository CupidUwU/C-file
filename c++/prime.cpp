//WAP to determine whether the number is prime or composite
#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n; i++)
	{
		if(n%i==0)
		{
		count++;			
		}
	}
	{
		if(count==2)
		
		printf("Prime number",n);
	}
	else(count==1)
	{
		printf("Neither prime nor composite");
	}
	else
	{
		printf("composite number");
	}
	return 0;
}
