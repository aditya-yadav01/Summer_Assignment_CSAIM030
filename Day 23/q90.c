#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;

        if(count[str[i]] == 2)
        {
            printf("First repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.");

    return 0;
}