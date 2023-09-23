#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[100000];
    int n;
    scanf("%d", &n);
    gets(c);
    while (n--)
    {
        gets(c);
        if (c[0] >= 'a' && c[0] <= 'z')
        {
            c[0] -= 32;
        }
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] == ' ' && c[i + 1] >= 'a' && c[i + 1] <= 'z')
            {
                c[i + 1] -= 32;
            }
        }
        printf("%s\n", c);
    }
    return 0;
}