#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};
float inputAndSum(struct Student s[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d %f %s", &s[i].studentId, &s[i].score, s[i].name) != 3) { 
        }
        sum += s[i].score;
    }
    return sum;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        printf("ERROR\n");
        return 1;
    }

    struct Student students[N];
    float totalScore = inputAndSum(students, N);

    if (totalScore < 0) {
        printf("ERROR\n");
        return 1;
    }

    if (N > 0) {
        printf("Average Score: %.2f\n", totalScore / N);
    } else {
        printf("Average Score: 0.00\n");
    }

    return 0;
}