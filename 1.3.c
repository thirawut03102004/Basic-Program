#include <stdio.h>

int main()
{
    int num1, num2,operationCode,result;
    if (scanf("%d %d %d", &num1,&num2,&operationCode) >=3){
    switch (operationCode) {
    case 1:
        result= num1 + num2;
        printf("%d %d  = %d",num1,num2,result);
        break;
    case 2:
        result= num1 - num2;
        printf("%d %d  = %d",num1,num2,result);
        break;
    case 3:
        result= num1 * num2;
        printf("%d %d  = %d",num1,num2,result);
        break;
    case 4:
        result= num1 / num2;
        printf("%d %d  = %d",num1,num2,result);
        break;
    default:
        printf("Invalid Operation");
    }
}
    return 0;
}