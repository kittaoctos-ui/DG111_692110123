#include <stdio.h>
int main()
{
    int Max_hp;
    int damage;
    int poisoned_input; // 1 = true, 0 = false
    int attack_count;

    _Bool is_poisoned;
    printf(" MAX_HP: ");
    scanf("%d", &Max_hp);
    printf(" Damage taken: ");
    scanf("%d", &damage);
    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    is_poisoned = poisoned_input;
    printf("attack count: ");
    scanf("%d", &attack_count);
    int HP = Max_hp - damage;
    if (HP < 0)
    {
        HP = 0;
    }

    char *status;
    if (HP == 0)
    {
        status = "DEAD";
    }
    else if (HP <= Max_hp * 20 / 100)
    {
        status = "CRITICAL";
    }
    else if ((is_poisoned == 1))
    {
        status = "POISONED";
    }
    else
    {
        status = "Normal";
    }
    printf("=== Character Status ===\n");
    printf("State: %s\n", status);

    // Ultimate Ready!
    if (attack_count > 0 && attack_count % 5 == 0)
    {
        printf("Ultimate Ready!\n");
    }
    return 0;
}