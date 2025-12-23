#include <stdio.h>

int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    // รับค่าคะแนนตัวแรก
    if (scanf("%d", &score) != 1) {
        return 1;
    }

    // วนลูปรับค่าไปเรื่อยๆ จนกว่าจะรับค่า -1
    while (score != -1) {
        // เงื่อนไขการให้เกรด
        if (score >= 80) {
            countA++;
        } else if (score >= 70) {
            countB++;
        } else if (score >= 60) {
            countC++;
        } else if (score >= 50) {
            countD++;
        } else {
            countF++;
        }

        // รับค่าคะแนนตัวถัดไปภายในลูป
        if (scanf("%d", &score) != 1) {
            break;
        }
    }

    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);

    return 0;
}