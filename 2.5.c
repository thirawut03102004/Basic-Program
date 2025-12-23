#include <stdio.h>

int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    printf("Enter scores (-1 to stop): \n");
    while (1) {
        int result = scanf("%d", &score);
        if (result == 0) {
            printf("Error: Invalid input! Please enter only numbers.\n");
            return 1;
        }
        if (score == -1) {
            break;
        }
        if (score >= 80) {countA += 1;} 
        else if (score >= 70) {countB += 1;} 
        else if (score >= 60) {countC += 1;} 
        else if (score >= 50) {countD += 1;} 
        else if (score >= 0) {countF += 1;}
    }
    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);

    return 0;
}