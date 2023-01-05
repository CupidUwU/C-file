// WAP a program to find to concat the first input string to second string.
#include<stdio.h>
#include<string.h>
int main()
{
	char string1[100], string2[100];

	printf("Enter the first string: ");
	scanf("%s",&string1);
	
	printf("Enter the second string: ");
	scanf("%s",&string2);
	
    strcat(string1,string2);
	printf("%s",string1);
	
	return 0;
	
}
