#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int base[MAX_SIZE];
    int n;

    printf("n: ");
    scanf("%d", &n);

    // วน loop รับค่า n ตัวเก็บใน arr[]
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &base[i]);
    }

    // หา min, max, sum ด้วย loop เดียว (traversal ครั ้งเดียวพอ)
    int min = base[0], max = base[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (base[i] < min)
            min = base[i];
        if (base[i] > max)
            max = base[i];
        sum += base[i];
    }
    float average = (float)sum / n;

    printf("Min:     %d\n", min);
    printf("Max:     %d\n", max);
    printf("Sum:     %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}