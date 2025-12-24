#include <stdio.h>

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose(int src[2][3], int dest[3][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dest[j][i] = src[i][j];
        }
    }
}

void multiply(int A[2][3], int BT[3][2], int C[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * BT[k][j];
            }
        }
    }
}

int main()
{
    int A[2][3];
    int B[2][3];
    int BT[3][2];
    int C[2][2];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (scanf("%d", &A[i][j]) != 1)
                return 0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (scanf("%d", &B[i][j]) != 1)
                return 0;
        }
    }

    transpose(B, BT);
    multiply(A, BT, C);

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    print_matrix(2, 3, A);

    printf("\nMatrix B (2x3):\n");
    print_matrix(2, 3, B);

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    print_matrix(3, 2, BT);

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    print_matrix(2, 2, C);

    return 0;
}
