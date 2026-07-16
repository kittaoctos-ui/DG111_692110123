#include <math.h>
#include <stdio.h>
int main()
{
    int a = 10 / 3;          // expected = 3   // Actual  = 32758
    float b = 10.0 / 3;      // expected = 3.333333 // Actual  = 4.16240915e+13
    float c = (float)10 / 3; // expected = 3.333333 // Actual  = 0
    int d = 10 % 3;          // expected = 1  // Actual  = 71
    int e = -7 % 3;          // expected = -1 // Actual  = 0
    int f = 7 % -3;          // expected = 1  // Actual  = 1

    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %f\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);

    int x = 5;
    int z = x++;
    printf("x ++ = %d\n", x++);
    printf("x   = %d\n", z);
    int y = ++x;
    printf(" ++x = %d\n", ++x);
    printf("x   = %d\n", y);

    printf("2 + 3 * 4   = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3  = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5   = %d\n", 2 * 3 + 4 * 5);
    return 0;
}