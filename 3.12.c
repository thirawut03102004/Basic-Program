#include <stdio.h>

float cal(int lvl, int armor)
{
    float baseAtk = lvl * 10.0;
    float reduction;

    if (armor < 50)
    {
        reduction = 0.20;
    }
    else
    {
        reduction = 0.40;
    }

    return baseAtk * (1.0 - reduction);
}

int main()
{
    int N_CALCULATIONS, i;
    int attkLvl, oppLvl, oppArmor;
    float netDamage, damageDeficit;
    const float WORTH_THRESHOLD = 150.0;

    if (scanf("%d", &N_CALCULATIONS) != 1)
    {
        return 0;
    }

    for (i = 0; i < N_CALCULATIONS; i++)
    {
        if (scanf("%d %d %d", &attkLvl, &oppLvl, &oppArmor) == 3)
        {

            netDamage = cal(attkLvl, oppArmor);

            if (netDamage >= WORTH_THRESHOLD)
            {
                printf("SUCCESS! Net Damage: %.2f\n", netDamage);
            }
            else
            {
                damageDeficit = WORTH_THRESHOLD - netDamage;
                printf("FAIL. Deficit: %.2f\n", damageDeficit);
            }
        }
    }

    return 0;
}
