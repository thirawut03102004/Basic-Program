#include <stdio.h>

struct Order
{
    int itemId;
    float unitPrice;
    int quantity;
};

int main()
{
    struct Order o;
    float productSum = 0.0;
    float grandTotal = 0.0;

    printf("Enter  0 to End :\n");

    while (1)
    {

        if (scanf("%d", &o.itemId) != 1 || o.itemId == 0)
        {
            break;
        }

        if (scanf("%f %d", &o.unitPrice, &o.quantity) != 2)
        {
            break;
        }

        productSum += (o.unitPrice * o.quantity);
    }

    grandTotal = productSum + 50.0;

    if (grandTotal >= 500.0)
    {
        grandTotal *= 0.90;
    }

    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}
