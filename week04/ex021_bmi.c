#include <stdio.h>
#include <math.h>
int main()
{
    float weight, height_cm;

    printf("Weight (kg) : ");
    scanf("%f", &weight);

    printf("Height (cm) : ");
    scanf("%f", &height_cm);
    height_cm /= 100;

    float BMI = weight / (height_cm * height_cm);
    printf("BMI : %.2f\n", BMI);

    if (BMI < 18.5)
        printf("Category : Underweight\n");
    else if (BMI >= 18.5 && BMI < 24.9)
        printf("Category : Normal weight\n");
    else if (BMI >= 25.0 && BMI < 29.9)
        printf("Category : Overweight\n");
    else
        printf("Category : Obesity\n");

    return 0;
}