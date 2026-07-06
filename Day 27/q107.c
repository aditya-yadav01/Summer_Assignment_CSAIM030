#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    struct Employee employee[100];
    int n = 0;
    int choice;
    int i;
    int searchId;
    int found;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &employee[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", employee[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &employee[n].basicSalary);

            printf("Enter Bonus: ");
            scanf("%f", &employee[n].bonus);

            employee[n].totalSalary = employee[n].basicSalary + employee[n].bonus;

            n++;

            printf("Employee added successfully.\n");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No employee records available.\n");
            }
            else
            {
                printf("\n----- Employee Salary Records -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("Employee ID  : %d\n", employee[i].id);
                    printf("Name         : %s\n", employee[i].name);
                    printf("Basic Salary : %.2f\n", employee[i].basicSalary);
                    printf("Bonus        : %.2f\n", employee[i].bonus);
                    printf("Total Salary : %.2f\n", employee[i].totalSalary);
                }
            }
        }
        else if (choice == 3)
        {
            if (n == 0)
            {
                printf("No employee records available.\n");
            }
            else
            {
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (employee[i].id == searchId)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID  : %d\n", employee[i].id);
                        printf("Name         : %s\n", employee[i].name);
                        printf("Basic Salary : %.2f\n", employee[i].basicSalary);
                        printf("Bonus        : %.2f\n", employee[i].bonus);
                        printf("Total Salary : %.2f\n", employee[i].totalSalary);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee not found.\n");
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