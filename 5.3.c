#include <stdio.h>

int sum(int array[], int size);

int main()
{
    int numbers[5];
    int total_sum;
    float average;
    int i;

    printf("Enter 5 integer numbers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    total_sum = sum(numbers, 5);

    average = (float)total_sum / 5;

    printf("\n--- ARRAY AVERAGE REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", average);

    return 0;
}

int sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
