#include <stdio.h>

struct SalesRecord
{
    char name[50];
    float target;
    float actual;
};

int main()
{
    int N, i;
    float grandTotalCommission = 0.0;

    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    for (i = 0; i < N; i++)
    {
        struct SalesRecord record;
        float baseCommission;

        if (scanf("%f %f %s", &record.target, &record.actual, record.name) != 3)
        {
            continue;
        }

        baseCommission = record.actual * 0.10;

        if (record.actual >= record.target * 1.20)
        {
            baseCommission += 200.0;
        }
        else if (record.actual >= record.target)
        {
            baseCommission += 50.0;
        }
        else if (record.actual < record.target * 0.90)
        {
            baseCommission -= 100.0;
        }

        grandTotalCommission += baseCommission;
    }

    printf("Grand Total Commission: %.2f\n", grandTotalCommission);

    return 0;
}
