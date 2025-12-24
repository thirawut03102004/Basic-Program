#include <stdio.h>

int findMax(int temps[], int size)
{
    int max = temps[0];
    for (int i = 1; i < size; i++)
    {
        if (temps[i] > max)
        {
            max = temps[i];
        }
    }
    return max;
}

int main()
{
    int daily_temp[7];
    int max_temp;
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("Enter temperature for Day %d: ", i + 1);
        scanf("%d", &daily_temp[i]);
    }

    max_temp = findMax(daily_temp, 7);

    printf("\n--- DAILY TEMPERATURE REPORT ---\n");
    printf("Recorded Temperatures (C): ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", daily_temp[i]);
    }
    printf("\n");

    printf("Maximum Temperature Found: %d C\n", max_temp);

    if (max_temp >= 35)
    {
        printf("Weather is HOT!\n");
    }
    else
    {
        printf("Weather is MODERATE.\n");
    }

    return 0;
}
