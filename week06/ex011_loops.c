#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("i = %d\n", i);
    }

    int j = 1;
    while (j <= 10)
    {
        printf("j = %d\n", j);
        j++;
    }

    int l = 1;
    do
    {
        printf("l = %d\n", l);
        l++;
    } while (l <= 10);

    int sum = i + j + l;

    printf("sum = %d\n", sum);
    return 0;
}