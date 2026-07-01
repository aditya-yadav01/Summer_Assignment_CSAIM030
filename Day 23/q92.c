#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[str[i]] > max)
        {
            max = count[str[i]];
            ch = str[i];
        }
    }

    printf("Maximum occurring character = %c", ch);
    printf("\nFrequency = %d", max);

    return 0;
}