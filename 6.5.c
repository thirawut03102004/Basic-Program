#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    char sentence[MAX_SIZE];
    int vowel_count = 0;
    char *char_ptr;

    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL)
    {
        return 1;
    }

    char *p = sentence;
    while (*p != '\0')
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
        p++;
    }

    char_ptr = sentence;

    while (*char_ptr != '\0')
    {
        if (*char_ptr == 'a' || *char_ptr == 'e' || *char_ptr == 'i' || *char_ptr == 'o' || *char_ptr == 'u' ||
            *char_ptr == 'A' || *char_ptr == 'E' || *char_ptr == 'I' || *char_ptr == 'O' || *char_ptr == 'U')
        {
            vowel_count++;
        }
        char_ptr++;
    }

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}
