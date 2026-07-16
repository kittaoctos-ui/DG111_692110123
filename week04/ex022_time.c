#include <stdio.h>
int main()
{
    int second, hour, minute, secs;
    printf("Enter time (in seconds): ");
    scanf("%d", &second);
    hour = second / 3600;
    minute = (second % 3600) / 60;
    secs = second % 60;

    printf("You entered: %d:%02d:%02d\n", hour, minute, secs);
    return 0;
}