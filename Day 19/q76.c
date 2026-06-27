#include <stdio.h>

int main()
{
    int n, i, j;
    int a[10][10];
    int sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements = %d", sum);

    return 0;
}