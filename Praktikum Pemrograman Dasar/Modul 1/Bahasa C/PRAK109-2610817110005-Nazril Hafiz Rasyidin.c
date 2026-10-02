#include <stdio.h>

int main()
{
    int pasukan = 958730;
    const char *hero[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    int total_hero = sizeof(hero) / sizeof(hero[0]);
    int musuh_perhero = pasukan / total_hero;

    printf("Jumlah pasukan yang dibawa oleh Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", total_hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", musuh_perhero);
    return 0;
}