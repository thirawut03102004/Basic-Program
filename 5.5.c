#include <stdio.h>

#define NUM_STUDENTS 4

struct Student
{
    int id;
};

int check(struct Student students[], int size, int search_id)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].id == search_id)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    struct Student id_list[NUM_STUDENTS];
    int search_id;
    int found_status;
    int i;

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        scanf("%d", &id_list[i].id);
    }

    scanf("%d", &search_id);

    found_status = check(id_list, NUM_STUDENTS, search_id);

    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%d ", id_list[i].id);
    }
    printf("\n");
    printf("Search ID: %d\n", search_id);

    if (found_status == 1)
    {
        printf("Result: ID FOUND in the system.\n");
    }
    else
    {
        printf("Result: ID NOT FOUND in the system.\n");
    }

    return 0;
}
