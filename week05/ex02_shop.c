#include <stdio.h>
int main()
{
    int Gold = 1000;
    printf(" ==== ITEM SHOP ====\n");
    printf("Gold : %d \n", Gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    int select;
    printf("Select item : ");
    scanf("%d", &select);
    printf("==== Purchase ====\n");
    switch (select)
    {
    case 1:
        if (Gold < 50)
        {
            printf("Not enough Gold!\n");
            break;
        }
        printf("Health Potion : 50 Gold\n");
        Gold -= 50;
        break;

    case 2:
        if (Gold < 80)
        {
            printf("Not enough Gold!\n");
            break;
        }
        printf("Mana Potion : 80 Gold\n");
        Gold -= 80;
        break;

    case 3:
        if (Gold < 500)
        {
            printf("Not enough Gold!\n");
            break;
        }
        printf("Iron Sword : 500 Gold\n");
        Gold -= 500;
        printf("Remaining Gold: %d\n", Gold);
        printf("ATK Bonus: +20\n");
        break;

    case 4:
        if (Gold < 300)
        {
            printf("Not enough Gold!\n");
            break;
        }
        printf("Leather Armor : 300 Gold\n");
        Gold -= 300;
        printf("Remaining Gold: %d\n", Gold);
        printf("DEF Bonus: +15\n");
        break;

    case 5:

        printf("Exit\n");
        break;

    default:
        printf("Invalid selection.\n");
        break;
    }
    return 0;
}