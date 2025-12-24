#include <stdio.h>

struct Student
{
    int id;
};

int main()
{
    struct Student id_list[4];
    int search_id;
    int found_status = 0;
    int i;

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &id_list[i].id);
    }

    scanf("%d", &search_id);

    for (i = 0; i < 4; i++)
    {
        if (id_list[i].id == search_id)
        {
            found_status = 1;
            break;
        }
    }

    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", id_list[i].id);
    }
    printf("\nSearch ID: %d\n", search_id);

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
