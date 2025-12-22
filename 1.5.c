#include <stdio.h>

int main() {
    int number;
    int evenSum = 0;
    int oddSum = 0;

    printf("กรอกตัวเลขจำนวนเต็ม (0 เพื่อจบ):\n");

    do {
        printf("กรอกเลข: ");
        if (scanf("%d", &number) != 1) {
            break; 
        }

        if (number != 0) {
            if (number % 2 == 0) {
                evenSum += number; 
            } 
            else {
                oddSum += number;  
            }
        }

    } while (number != 0);
    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);

    return 0;
}