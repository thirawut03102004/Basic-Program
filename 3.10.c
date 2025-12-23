#include <stdio.h>

struct ProductRecord {
    char label[50];
    float pricePerUnit;
    int amt;
};

int main() {
    int totalEntries, idx;
    float sumBeforeTax = 0.0;
    float taxValue = 0.0;
    float finalAmount = 0.0;

    if (scanf("%d", &totalEntries) != 1) {
        return 1;
    }

    struct ProductRecord list[totalEntries];

    printf("--- RECEIPT ---\n");

    for (idx = 0; idx < totalEntries; idx++) {
        float lineTotal;

        if (scanf("%s %f %d", list[idx].label, &list[idx].pricePerUnit, &list[idx].amt) != 3) {
            return 1;
        }

        lineTotal = list[idx].pricePerUnit * list[idx].amt;

        printf("%s x %d = %.2f\n", list[idx].label, list[idx].amt, lineTotal);
        sumBeforeTax += lineTotal;
    }

    taxValue = sumBeforeTax * 0.07;
    finalAmount = sumBeforeTax + taxValue;

    printf("--------------------------\n");
    printf("Subtotal: %.2f\n", sumBeforeTax);
    printf("VAT (7%%): %.2f\n", taxValue);
    printf("Grand Total: %.2f\n", finalAmount);

    return 0;
}
