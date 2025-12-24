#include <stdio.h>

void find(int data[], int n, int search, int *count)
{
    for (int i = 0; i < n; i++)
    {
        if (data[i] == search)
        {
            (*count)++;
        }
    }
}

int main()
{
    int data[10];
    int N;
    int search_value;
    int count = 0;
    int i;

    if (scanf("%d", &N) != 1)
        return 0;

    if (N > 10 || N < 1)
    {
        N = 10;
    }

    for (i = 0; i < N; i++)
    {
        if (scanf("%d", &data[i]) != 1)
            break;
    }

    if (scanf("%d", &search_value) != 1)
        return 0;

    find(data, N, search_value, &count);

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");
    printf("Search Value: %d\n", search_value);
    printf("Frequency Count: %d\n", count);

    return 0;
}
