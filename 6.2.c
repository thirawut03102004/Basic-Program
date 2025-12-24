#include <stdio.h>

void increase_value(int *number_ptr)
{
    *number_ptr = *number_ptr + 10;
}

void swap_values(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    if (scanf("%d %d", &num1, &num2) != 2)
        return 0;

    printf("\n--- SWAPPING REPORT ---\n");
    printf("Before Swap - Num1: %d, Num2: %d\n", num1, num2);
    swap_values(&num1, &num2);
    printf("After Swap - Num1: %d, Num2: %d\n", num1, num2);

    return 0;
}
