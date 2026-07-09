#include <stdio.h>

int main()
{
    printf("=== Enter Data ===\n");

    char name[100];
    int age;
    float gpa;
    char fav_subject[100];

    printf("Name : ");
    scanf("%s", name);

    printf("Age : ");
    scanf("%d", &age);

    printf("GPA : ");
    scanf("%f", &gpa);

    printf("Favorite Subject : ");
    scanf(" %s", fav_subject);

    printf("=== Personal Card ===\n");
    printf("┌───────────────────────────────────┐ \n");
    printf("| %-10s : %-20s |\n", "Name", name);
    printf("| %-10s : %-20d |\n", "Age", age);
    printf("| %-10s : %-20.2f |\n", "GPA", gpa);
    printf("| %-10s : %-14s |\n", "Favorite Subject", fav_subject);
    printf("└───────────────────────────────────┘ \n");

    return 0;
}