#include <stdio.h>

void Scores(int scores[], int n, int *sum, float *avg, int *above_avg)
{
    for (int i = 0; i < n; i++)
    {
        *sum += scores[i];
    }
    *avg = (float)*sum / n;
    for (int i = 0; i < n; i++)
    {
        if (scores[i] > *avg)
        {
            (*above_avg)++;
        }
    }
}

int main()
{
    int scores[5];
    int sum = 0;
    float average = 0.0;
    int above_average_count = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter score for student %d: ", i + 1);
        if (scanf("%d", &scores[i]) != 1)
            return 0;
    }

    Scores(scores, 5, &sum, &average, &above_average_count);

    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n");
    printf("Recorded Scores: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }

    printf("\n");
    printf("Total Sum: %d\n", sum);
    printf("Average Score: %.2f\n", average);
    printf("Number of Scores Above Average: %d\n", above_average_count);

    return 0;
}
