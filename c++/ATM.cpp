#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Declare variables
    int amount,option, pin, balance = 1000;
    char password[10];

    // Prompt user to enter PIN
    printf("Enter PIN: ");
    scanf("%d", &pin);

    // Verify PIN
    if (pin == 1234)
    {
        // Prompt user to enter password
        printf("Enter password: ");
        scanf("%s", password);

        // Verify password
        if (strcmp(password, "password") == 0)
        {
            // Display main menu
            printf("1. Check balance\n");
            printf("2. Withdraw cash\n");
            printf("3. Deposit cash\n");
            printf("4. Quit\n");
            printf("Enter option: ");
            scanf("%d", &option);

            // Process user's request
            switch (option)
            {
                case 1:
                    printf("Your current balance is $%d\n", balance);
                    break;
                case 2:
                    printf("Enter amount to withdraw: ");
                    scanf("%d", &amount);
                    if (amount > balance)
                    {
                        printf("Insufficient balance\n");
                    }
                    else
                    {
                        balance -= amount;
                        printf("Please collect your cash\n");
                        printf("Your updated balance is $%d\n", balance);
                    }
                    break;
                case 3:
                    printf("Enter amount to deposit: ");
                    scanf("%d", &amount);
                    balance += amount;
                    printf("Your updated balance is $%d\n", balance);
                    break;
                case 4:
                    printf("Thank you for using our ATM\n");
                    break;
                default:
                    printf("Invalid option\n");
                    break;
            }
        }
        else
        {
            printf("Invalid password\n");
        }
    }
    else
    {
        printf("Invalid PIN\n");
    }

    return 0;
}

