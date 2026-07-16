#include <stdio.h>
#include <math.h>
int main()
{
    int Attack;
    int Defense;
    int Hit_Number;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack: ");
    scanf("%d", &Attack);
    printf("Enemy Defense: ");
    scanf("%d", &Defense);
    printf("Hit Number: ");
    scanf("%d", &Hit_Number);

    int base_damage = Attack - Defense;
    int Critical_Damage = (int)ceil((float)base_damage * 1.5f);
    if ((Hit_Number % 5 == 0))
    {
        printf("Damage: %d  *** CRITICAL HIT x 1.5 ***\n", Critical_Damage);
    }
    else
    {
        printf("Damage: %d\n", base_damage);
    }
    return 0;
}