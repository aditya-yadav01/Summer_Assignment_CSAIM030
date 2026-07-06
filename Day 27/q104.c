#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[100];
    int totalStudents = 0;
    int choice;
    int i;
    int searchRoll;
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
            printf("\nEnter Roll Number: ");
            scanf("%d", &students[totalStudents].rollNo);

            printf("Enter Name: ");
            scanf(" %[^\n]", students[totalStudents].name);

            printf("Enter Marks: ");
            scanf("%f", &students[totalStudents].marks);

            totalStudents++;

            printf("Student added successfully!\n");
        }

        else if (choice == 2)
        {
            if (totalStudents == 0)
            {
                printf("\nNo student records found.\n");
            }
            else
            {
                printf("\n----- Student Records -----\n");

                for (i = 0; i < totalStudents; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", students[i].rollNo);
                    printf("Name        : %s\n", students[i].name);
                    printf("Marks       : %.2f\n", students[i].marks);
                }
            }
        }

        else if (choice == 3)
        {
            if (totalStudents == 0)
            {
                printf("\nNo student records available.\n");
                continue;
            }

            printf("Enter Roll Number to Search: ");
            scanf("%d", &searchRoll);

            found = 0;

            for (i = 0; i < totalStudents; i++)
            {
                if (students[i].rollNo == searchRoll)
                {
                    printf("\nStudent Found\n");
                    printf("Roll Number : %d\n", students[i].rollNo);
                    printf("Name        : %s\n", students[i].name);
                    printf("Marks       : %.2f\n", students[i].marks);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Student not found.\n");
            }
        }

        else if (choice == 4)
        {
            printf("Thank you!\n");
            break;
        }

        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}