//WAP to pass an array to function
#include<stdio.h>
void display(int , int);
int main()
{
	int arr[5]={2,4,6,8,10};
	display(arr[1],arr[3]);
	return 0;
}
void display(int a,int b)
{
	printf("value=%d\n",a);
	printf("value=%d",b);
}
