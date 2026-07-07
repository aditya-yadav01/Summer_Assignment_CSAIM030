#include <stdio.h>

int main()
{
    int accountNo = 0;
    char name[50];
    float balance = 0;
    int choice;
    float amount;

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &accountNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", name);

                printf("Enter Initial Balance: ");
                scanf("%f", &balance);

                printf("Account created successfully.\n");
                break;

            case 2:
                if(accountNo == 0)
                {
                    printf("Please create an account first.\n");
                }
                else
                {
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                }
                break;

            case 3:
                if(accountNo == 0)
                {
                    printf("Please create an account first.\n");
                }
                else
                {
                    printf("Enter Withdraw Amount: ");
                    scanf("%f", &amount);

                    if(amount <= balance)
                    {
                        balance -= amount;
                        printf("Withdrawal successful.\n");
                    }
                    else
                    {
                        printf("Insufficient Balance.\n");
                    }
                }
                break;

            case 4:
                if(accountNo == 0)
                {
                    printf("No account found.\n");
                }
                else
                {
                    printf("\n----- Account Details -----\n");
                    printf("Account Number : %d\n", accountNo);
                    printf("Account Holder : %s\n", name);
                    printf("Balance         : %.2f\n", balance);
                }
                break;

            case 5:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 5);

    return 0;
}