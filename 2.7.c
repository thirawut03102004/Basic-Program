#include <stdio.h>

void checkFizzBuzz(int val, int *fb, int *f, int *b, int *ot)
{
    if (val % 15 == 0)
    {
        *fb = *fb + 1;
    }
    else if (val % 3 == 0)
    {
        *f = *f + 1;
    }
    else if (val % 5 == 0)
    {
        *b = *b + 1;
    }
    else
    {
        *ot = *ot + 1;
    }
}

int main()
{
    int N, i;
    int countFizzBuzz = 0;
    int countFizz = 0;
    int countBuzz = 0;
    int countOther = 0;

    if (scanf("%d", &N) != 1)
    {
        printf("Error\n");
        return 1;
    }

    for (i = 1; i <= N; i++)
    {
        checkFizzBuzz(i, &countFizzBuzz, &countFizz, &countBuzz, &countOther);
    }

    printf("Count FizzBuzz (by 15): %d\n", countFizzBuzz);
    printf("Count Fizz (by 3 only): %d\n", countFizz);
    printf("Count Buzz (by 5 only): %d\n", countBuzz);
    printf("Count Other: %d\n", countOther);

    return 0;
}
