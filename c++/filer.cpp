#include<stdio.h>
#include<string.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	double percentage;
	
	printf("Enter the marks of Math:");
	scanf("%d",&m1);
	
	printf("Enter the marks of Account:");
	scanf("%d",&m2);
	
	printf("Enter the marks of English:");
	scanf("%d",&m3);
	
	printf("Enter the marks of Microprocessor:");
	scanf("%d",&m4);
	
	printf("Enter the marks of C++:");
	scanf("%d",&m5);
	
	total = m1+m2+m3+m4+m5;
	printf("Total=%d\n",total);
	
	percentage = (total/5);
	printf("Percentage:%.2lf %%",percentage);
	
	if(percentage<=80)
	{
		printf("Division:disctinction",percentage);
		
	}
	return 0;

}
