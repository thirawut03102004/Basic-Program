#include <stdio.h>

#define NUM_EMPLOYEES 4

struct Employee
{
    int id;
    int salary;
};

void salary(struct Employee emps[], int size, int *max, int *min)
{
    *max = emps[0].salary;
    *min = emps[0].salary;

    for (int i = 1; i < size; i++)
    {
        if (emps[i].salary > *max)
        {
            *max = emps[i].salary;
        }
        if (emps[i].salary < *min)
        {
            *min = emps[i].salary;
        }
    }
}

int main()
{
    struct Employee staff_data[NUM_EMPLOYEES];
    int max_salary;
    int min_salary;
    int i;

    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        scanf("%d", &staff_data[i].id);
        scanf("%d", &staff_data[i].salary);
    }

    salary(staff_data, NUM_EMPLOYEES, &max_salary, &min_salary);

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID     | Salary\n");
    printf("-------|---------\n");
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("%-6d | %d\n", staff_data[i].id, staff_data[i].salary);
    }

    printf("\nMaximum Salary Found: %d\n", max_salary);
    printf("Minimum Salary Found: %d\n", min_salary);

    return 0;
}
