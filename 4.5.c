#include <stdio.h>

void Sum(int nums[], int n, int *total)
{
    for (int i = 0; i < n; i++)
    {
        *total += nums[i];
    }
}

int main()
{
    int data[6];
    int total_sum = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Enter integer number %d: ", i + 1);
        if (scanf("%d", &data[i]) != 1)
            return 0;
    }

    Sum(data, 6, &total_sum);

    printf("\n--- SUMMATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\nTotal Sum of Numbers: %d\n", total_sum);

    return 0;
}
