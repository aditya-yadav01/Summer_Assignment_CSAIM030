#include <stdio.h>
#include <string.h>

int main()
{
    char book[20][50];
    int choice, total = 0, i;
    char search[50];

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Total Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                if(total < 20)
                {
                    printf("Enter Book Name: ");
                    fgets(book[total], 50, stdin);
                    book[total][strcspn(book[total], "\n")] = '\0';
                    total++;
                    printf("Book added successfully.\n");
                }
                else
                {
                    printf("Library is full.\n");
                }
                break;

            case 2:
                if(total == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBooks in Library:\n");
                    for(i = 0; i < total; i++)
                    {
                        printf("%d. %s\n", i + 1, book[i]);
                    }
                }
                break;

            case 3:
                if(total == 0)
                {
                    printf("Library is empty.\n");
                }
                else
                {
                    printf("Enter Book Name to Search: ");
                    fgets(search, 50, stdin);
                    search[strcspn(search, "\n")] = '\0';

                    int found = 0;

                    for(i = 0; i < total; i++)
                    {
                        if(strcmp(book[i], search) == 0)
                        {
                            printf("Book Found!\n");
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found.\n");
                    }
                }
                break;

            case 4:
                printf("Total Books = %d\n", total);
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