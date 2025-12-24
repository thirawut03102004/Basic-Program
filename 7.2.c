#include <stdio.h>
#include <stdlib.h>

#define FILENAME "input_data.csv"

int main() {
    FILE *fptr;
    int num1, num2, num3, num4, num5;
    int total_sum;

    FILE *fcreate = fopen(FILENAME, "w");
    if (fcreate != NULL) {
        fprintf(fcreate, "10,20,30,40,50");
        fclose(fcreate);
    }

    fptr = fopen(FILENAME, "r");

    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", FILENAME);
        exit(1);
    }

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILENAME);

    if (fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5) == 5) {
        total_sum = num1 + num2 + num3 + num4 + num5;
        printf("File reading complete.\n");
    }

    fclose(fptr);

    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);

    return 0;
}
