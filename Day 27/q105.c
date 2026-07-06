#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student student[100];
    int n = 0;
    int choice;
    int i;
    int roll;
    int found;

    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Roll Number: ");
            scanf("%d", &student[n].rollNo);

            printf("Enter Name: ");
            scanf(" %[^\n]", student[n].name);

            printf("Enter Marks: ");
            scanf("%f", &student[n].marks);

            n++;

            printf("Student added successfully.\n");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No student records available.\n");
            }
            else
            {
                printf("\n----- Student Records -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", student[i].rollNo);
                    printf("Name        : %s\n", student[i].name);
                    printf("Marks       : %.2f\n", student[i].marks);
                }
            }
        }
        else if (choice == 3)
        {
            if (n == 0)
            {
                printf("No student records available.\n");
            }
            else
            {
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (student[i].rollNo == roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n", student[i].rollNo);
                        printf("Name        : %s\n", student[i].name);
                        printf("Marks       : %.2f\n", student[i].marks);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Student not found.\n");
                }
            }
        }
        else if (choice == 4)
        {
            printf("Exiting Program...\n");
            break;
        }
        else
        {
            printf("Invalid Choice.\n");
        }
    }

    return 0;
}