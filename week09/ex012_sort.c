#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int base[MAX_SIZE];
    int n;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &base[i]);

    printf("Before: ");
    for (int i = 0; i < n; i++)
        printf("%d ", base[i]);
    printf("\n");

    // bubble sort — nested loop 2 ชั ้น
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (base[j] > base[j + 1])
            {
                int temp = base[j];
                base[j] = base[j + 1];
                base[j + 1] = temp;
            }
        }
    }

    printf("After:  ");
    for (int i = 0; i < n; i++)
        printf("%d ", base[i]);
    printf("\n");

    return 0;
}