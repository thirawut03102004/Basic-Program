#include <stdio.h>

struct Transaction {
    char description[50];
    float amount;
};

void calculateTotals(struct Transaction t[], int n, float *income, float *expense) {
    for (int i = 0; i < n; i++) {
        if (t[i].amount >= 0.0) {
            *income += t[i].amount;
        } else {
            *expense += -t[i].amount;
        }
    }
}

int main() {
    int N;
    float totalIncome = 0.0, totalExpense = 0.0, netBalance = 0.0;

    if (scanf("%d", &N) != 1) return 1;

    struct Transaction transactions[N];

    for (int i = 0; i < N; i++) {
        scanf("%f %s", &transactions[i].amount, transactions[i].description);
    }

    calculateTotals(transactions, N, &totalIncome, &totalExpense);

    netBalance = totalIncome - totalExpense;

    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance: %.2f\n", netBalance);

    return 0;
}
