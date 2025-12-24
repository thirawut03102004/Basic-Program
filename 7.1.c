#include <stdio.h>

#define FILENAME "output_data.txt"

int main()
{
    FILE *fptr;
    char buffer[100];
    int year = 2025;

    fptr = fopen(FILENAME, "w");
    if (fptr == NULL)
    {
        printf("ERROR: Could not open file %s for writing.\n", FILENAME);
        return 1;
    }

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n", FILENAME);

    fprintf(fptr, "Hello, C File Handling is easy.\n");
    fprintf(fptr, "%d\n", year);

    fclose(fptr);
    printf("File writing complete.\n");

    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", FILENAME);

    fptr = fopen(FILENAME, "r");
    if (fptr != NULL)
    {
        printf("\n\n");
        while (fgets(buffer, sizeof(buffer), fptr))
        {
            printf("%s", buffer);
        }
        fclose(fptr);
    }

    return 0;
}
