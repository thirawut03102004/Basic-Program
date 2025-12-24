#include <stdio.h>

void Table(int data[], int status[], int n)
{
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        if (status[i] == 0)
        {
            count = 1;
            for (j = i + 1; j < n; j++)
            {
                if (data[i] == data[j])
                {
                    count++;
                    status[j] = -1;
                }
            }
            printf("%d | %d\n", data[i], count);
        }
    }
}

int main()
{
    int data[10];
    int status[10];
    int n, i;

    for (i = 0; i < 10; i++)
    {
        status[i] = 0;
    }

    if (scanf("%d", &n) != 1)
        return 0;
    if (n > 10)
        n = 10;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", n);
    printf("Recorded Numbers: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|---------\n");

    Table(data, status, n);

    return 0;
}
