#include <stdio.h>

void class(int nums[], int n, int *even, int *odd)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            (*even)++;
        }
        else
        {
            (*odd)++;
        }
    }
}

int main()
{
    int numbers[5];
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter integer number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    class(numbers, 5, &even_count, &odd_count);

    printf("\n--- NUMBER CLASSIFICATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    printf("Total Even Numbers Found: %d\n", even_count);
    printf("Total Odd Numbers Found: %d\n", odd_count);

    return 0;
}
