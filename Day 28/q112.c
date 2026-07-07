#include <stdio.h>
#include <string.h>

int main()
{
    char name[20][50];
    char phone[20][15];
    int total = 0;
    int choice, i, found;
    char search[50];

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                if(total < 20)
                {
                    printf("Enter Name: ");
                    fgets(name[total], 50, stdin);
                    name[total][strcspn(name[total], "\n")] = '\0';

                    printf("Enter Phone Number: ");
                    fgets(phone[total], 15, stdin);
                    phone[total][strcspn(phone[total], "\n")] = '\0';

                    total++;
                    printf("Contact added successfully.\n");
                }
                else
                {
                    printf("Contact list is full.\n");
                }
                break;

            case 2:
                if(total == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\n----- Contact List -----\n");
                    for(i = 0; i < total; i++)
                    {
                        printf("%d. %s - %s\n", i + 1, name[i], phone[i]);
                    }
                }
                break;

            case 3:
                if(total == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("Enter Name to Search: ");
                    fgets(search, 50, stdin);
                    search[strcspn(search, "\n")] = '\0';

                    found = 0;

                    for(i = 0; i < total; i++)
                    {
                        if(strcmp(name[i], search) == 0)
                        {
                            printf("\nContact Found\n");
                            printf("Name : %s\n", name[i]);
                            printf("Phone: %s\n", phone[i]);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Contact not found.\n");
                    }
                }
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}