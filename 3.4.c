#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int Pass(float score) {
    return score >= 60.0;
}

int main() {
    int N, i;
    int passCount = 0;
    int failCount = 0;

    if (scanf("%d", &N) != 1) {
        printf("ERROR\n");
        return 1;
    }

    struct Student students[N];

    for (i = 0; i < N; i++) {
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            printf("ERROR\n");
            return 1;
        }
    }

    for (i = 0; i < N; i++) {
        if (Pass(students[i].score)) {
            passCount++;
        } else {
            failCount++;
        }
    }

    printf("Pass Count: %d\n", passCount);
    printf("Fail Count: %d\n", failCount);

    return 0;
}
