#include <stdio.h>
int main()
{
    printf("Triangle\n");
    int i = 1;
    for (i = 1; i <= 5; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Square\n");

    int n = 4;
    for (i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Diamond\n");
    int l, k;
    int s = 3;
    for (i = 1; i <= s; i++)
    {
        for (l = 1; l <= s - i; l++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = s - 1; i >= 1; i--)
    {
        for (l = 1; l <= s - i; l++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}