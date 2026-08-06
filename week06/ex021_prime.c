#include <stdio.h>
int main()
{
    int n;
    int isPrimeN = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        isPrimeN = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrimeN = 0;
                break;
            }
        }
    }
    if (isPrimeN == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
}