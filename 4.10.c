#include <stdio.h>

void Matrix(int data[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int data[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (scanf("%d", &data[i][j]) != 1)
                return 0;
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: 3 Rows x 3 Columns\n");
    printf("Content (Table Format):\n");

    Matrix(data);

    return 0;
}
