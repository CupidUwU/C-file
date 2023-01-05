//WAP to find first 20 odd numbers and also find the sum and average.

#include<stdio.h>
int main()
{
	int i,count=0;
	double  sum=0, average;
	for(i=1;i<=40;i++)
	{
		if(i%2==1)
		{
			
			count++;
			sum = sum + i;
			printf(" %d",i);
		}
		
	}
	printf("Total odd numbers = %d\n",count);
	printf("Sum of 20 odd numbers = %lf\n",sum);
	average= sum/count;
	printf("The average = %lf\n",average);
	return 0;
}
