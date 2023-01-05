// WAP to reverse an input string
#include<stdio.h>
#include<string.h>
int main()
{
	char input[100], reverse[100];
	
	printf("Enter the string to reverse: ");
	scanf("%s",&input);
	
	strrev(input);
	
	printf("\n");
	printf("The reverse of the string is : %s",input);
	
	return 0;
}

