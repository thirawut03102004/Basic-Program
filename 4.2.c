#include <stdio.h>

void Scores(int arr[], int n, int *passSum, int *failCount)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 50)
        {
            *passSum += arr[i];
        }
        else
        {
            (*failCount)++;
        }
    }
}

void Reverse(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int N;
    int passSum = 0;
    int failCount = 0;

    if (scanf("%d", &N) != 1)
        return 0;

    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
    }

    Scores(scores, N, &passSum, &failCount);

    printf("Passing Scores Sum: %d\n", passSum);
    printf("Failing Students Count: %d\n", failCount);

    return 0;
}
