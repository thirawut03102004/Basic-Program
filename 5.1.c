#include <stdio.h>

int area(int length, int width);

int main()
{
    int input_length;
    int input_width;
    int result_area;

    printf("Enter rectangle length (integer): ");
    scanf("%d", &input_length);

    printf("Enter rectangle width (integer): ");
    scanf("%d", &input_width);

    result_area = area(input_length, input_width);

    printf("\n--- RECTANGLE AREA REPORT ---\n");
    printf("Length: %d\n", input_length);
    printf("Width: %d\n", input_width);
    printf("Calculated Area: %d\n", result_area);

    return 0;
}

int area(int length, int width)
{
    return length * width;
}
