#include<stdio.h>
int main()
{
	double add,sub,mul,div,a,b;
	int choice;

	printf("Enter a first number:");
	scanf(" %lf",&a);
	printf("Enter a second number:");
	scanf(" %lf",&b);
	
	printf("-------Options------ \n ");
	printf("Addition = 1 \n Subtraction = 2 \n Multiply = 3 \n Division = 4 \n");
	
	printf("Enter choice: \n");
	scanf("%d",&choice);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	switch(choice)
	{
		case 1:
			printf("the Addition of numbers: %.0lf",add);
			break;
			
			case 2:
			printf("the Subtraction of numbers: %.0lf",sub);
			break;
			
			case 3:
			printf("the Muiltiply of numbers: %.0lf",mul);
			break;
			
			case 4:
			printf("the Division of numbers: %.2lf",div);
			break;
			
			default:
			printf("invalid");
			
	}
	return 0;
}
