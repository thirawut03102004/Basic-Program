#include <stdio.h>

int main() {
    float principal, monthlyPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;

    /* รับค่า */
    if (scanf("%f %f", &principal, &monthlyPayment) != 2) {
        return 1;
    }

    /* ทำซ้ำรายเดือนจนกว่ายอดหนี้จะหมด */
    while (principal > 0) {
        monthCount++;
        /* 1. คำนวณดอกเบี้ย */
        interest = principal * INTEREST_RATE;

        /* 2. เพิ่มดอกเบี้ยเข้าไปในยอดหนี้ */
        principal = principal + interest;

        /* 3. ตรวจสอบว่าจ่ายไม่พอดอกเบี้ยหรือไม่ */
        if (monthlyPayment < interest) {
            principal = principal + PENALTY;
        }

        /* 4. หักเงินที่ชำระ */
        principal = principal - monthlyPayment;

        /* แสดงผลยอดหนี้คงเหลือ */
        printf("Month %d: Remaining %.2f\n", monthCount, principal);
    }

    printf("Loan settled in %d months.\n", monthCount);
    return 0;
}
