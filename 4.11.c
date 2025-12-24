#include <stdio.h>

void Sum(int matrix[2][4], int *sum)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *sum += matrix[i][j];
        }
    }
}

int main()
{
    int matrix[2][4];
    int total_sum = 0;
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
                return 0;
        }
    }

    Sum(matrix, &total_sum);

    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Recorded Matrix (2x4):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal Sum of all elements: %d\n", total_sum);

    return 0;
}
