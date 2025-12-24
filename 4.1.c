#include <stdio.h>

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printReverse(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int N;
    if (scanf("%d", &N) != 1)
        return 0;

    int scores[N];
    input(scores, N);
    printReverse(scores, N);

    return 0;
}
