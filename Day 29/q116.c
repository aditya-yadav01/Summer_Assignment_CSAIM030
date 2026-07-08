#include <stdio.h>

int main()
{
    int id[100], quantity[100];
    char name[100][50];
    int total = 0;
    int choice, i, searchId;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &id[total]);

                printf("Enter Item Name: ");
                scanf("%s", name[total]);

                printf("Enter Quantity: ");
                scanf("%d", &quantity[total]);

                total++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                if (total == 0)
                {
                    printf("No items available.\n");
                }
                else
                {
                    printf("\nID\tName\tQuantity\n");
                    for (i = 0; i < total; i++)
                    {
                        printf("%d\t%s\t%d\n", id[i], name[i], quantity[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < total; i++)
                {
                    if (id[i] == searchId)
                    {
                        printf("Item Found!\n");
                        printf("ID: %d\n", id[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        break;
                    }
                }

                if (i == total)
                {
                    printf("Item not found.\n");
                }
                break;

            case 4:
                printf("Enter Item ID to update: ");
                scanf("%d", &searchId);

                for (i = 0; i < total; i++)
                {
                    if (id[i] == searchId)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &quantity[i]);
                        printf("Quantity Updated Successfully!\n");
                        break;
                    }
                }

                if (i == total)
                {
                    printf("Item not found.\n");
                }
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}