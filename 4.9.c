#include <stdio.h>

void Tax(int gross, float *rate, float *amount, float *net)
{
    if (gross < 20000)
    {
        *rate = 0.0;
    }
    else if (gross < 50000)
    {
        *rate = 0.05;
    }
    else
    {
        *rate = 0.10;
    }
    *amount = gross * (*rate);
    *net = (float)gross - *amount;
}

int main()
{
    int gross_salary;
    float tax_rate = 0.0;
    float tax_amount = 0.0;
    float net_salary = 0.0;

    if (scanf("%d", &gross_salary) != 1)
        return 0;

    Tax(gross_salary, &tax_rate, &tax_amount, &net_salary);

    printf("\n--- SALARY CALCULATION REPORT ---\n");
    printf("Gross Salary: %d THB\n", gross_salary);
    printf("Tax Rate Applied: %.0f%%\n", tax_rate * 100);
    printf("Tax Amount Deducted: %.2f THB\n", tax_amount);
    printf("Net Salary: %.2f THB\n", net_salary);

    return 0;
}
