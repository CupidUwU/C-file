//WAP to add the numbers in an array by passing an array to function and calculate the final sum
#include<stdio.h>
int sum(int arr[]);
int main()
{
	int result,arr[5]={4,6,8,10,12};
	result=sum(arr);
	printf("Result=%d",result);
	return 0;
}
int sum(int arr[])
{
	int add=0;
	for(int i=0;i<5;i++)
	{
		add=add+arr[i];
	}
	return add;
}
