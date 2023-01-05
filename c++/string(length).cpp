//WAP to display the length if an inoput string
#include<stdio.h>
#include<string.h>
int main()
{
	char input[100];
	int len;
	
	printf("Enter the string: ");
	scanf("%s",&input);

	len = strlen(input);
	
	printf("The length of the string is : %d",len);
	
	return 0;
}
