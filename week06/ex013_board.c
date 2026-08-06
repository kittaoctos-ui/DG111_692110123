#include <stdio.h>
int main()
{
    int cols = 5;
    int row = 3;
    int count = 1;
    for (int i = 0; i <= row - 1; i++)
    {
        printf(" +---+---+---+---+---+\n");
        if (i == 0)
        {
            printf(" |");
        }
        else
        {
            printf(" |");
        }
        for (int j = 0; j <= cols - 1; j++)
        {
            printf("%2d |", count);
            count++;
        }
        printf("\n");
    }
    printf(" +---+---+---+---+---+\n");
}