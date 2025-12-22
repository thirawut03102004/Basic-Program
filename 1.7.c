#include <stdio.h>

int main() {
    int customerType;
    float consumption_kwh;
    float totalBill = 0.0;

    printf("Enter Customer Type 1 or 2 -- Consumption (kWh): \n");
    if (scanf("%d %f", &customerType, &consumption_kwh) != 2) {
        return 1;
    }

    if (customerType == 1) {
        if (consumption_kwh <= 100) {
            totalBill = consumption_kwh * 3.0;
        } else {
            totalBill = consumption_kwh * 4.0;
        }
    } 
    else if (customerType == 2) {
        if (consumption_kwh <= 500) {
            totalBill = consumption_kwh * 5.0;
        } else {
            totalBill = consumption_kwh * 6.5;
        }
    } 
    else {
        printf("Invalid Customer Type\n");
        return 0;
    }
        printf("TotalBill : %.2f baht", totalBill);


    return 0;
}