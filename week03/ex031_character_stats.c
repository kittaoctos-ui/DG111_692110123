#include <stdio.h>

int main()
{
    printf("=== Create Character ===\n");

    char char_name[100];
    int max_hp;
    int atk;
    int def;
    int level;

    printf("Character Name : ");
    scanf("%s", char_name);

    printf("Max HP : ");
    scanf("%d", &max_hp);

    printf("Attack Power : ");
    scanf("%d", &atk);

    printf("Defense Power : ");
    scanf("%d", &def);

    printf("Level : ");
    scanf("%d", &level);

    printf("===  Character Summary ===\n");
    printf("Name : %s\n", char_name);
    printf("Level : %d\n", level);
    printf("HP : %d\n", max_hp);
    printf("ATK : %d\n", atk);
    printf("DEF : %d\n", def);

    return 0;
}