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
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[str[i]] == 1)
        {
            printf("First non-repeating character = %c", str[i]);
            break;
        }
    }

    if(str[i] == '\0')
    {
        printf("No non-repeating character found.");
    }

    return 0;
}