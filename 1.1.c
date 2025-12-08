#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    if (n <= 0)
    {
    printf("ERROR\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Hello Loop!\n");
    }
    return 0;
}