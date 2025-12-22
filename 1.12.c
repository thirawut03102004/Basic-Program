#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    printf("Enter plan and dataGB : \n");
    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1;
    }
     switch (planCode) {
    case 1:
        if (dataUsage_GB <= 10){
            totalBill = 299;
        }
        else{
            totalBill = 299 + 10 * (dataUsage_GB - 10);        }
        break; 
    case 2:
        if (dataUsage_GB <= 20){
            totalBill = 599;
        }
        else{
            totalBill = 599 + 50 + 5 * (dataUsage_GB - 20);        }
        break;
        default:
        break;}

    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}