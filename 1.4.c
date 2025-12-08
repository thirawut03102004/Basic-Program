#include <stdio.h>

int main()
{
    int num1, num2,operationCode,result;
    
    printf("Enter your number 1,2 and operation : ");
    scanf("%d", &num1);
    printf("Enter your number 1,2 and operation : ");
    scanf("%d", &num2);
    printf("Enter your number 1,2 and operation : ");
    if (scanf("%d %d %d", &num1,&num2,&operationCode) >=0){
    switch (operationCode) {
    case 1:
        result= num1 + num2;
    case 2:
        result= num1 - num2;
        
    case 3:
        result= num1 * num2;
    case 4:
        result= num1 / num2;
    default:
    break;
    }
}
    else{
    printf("Invalid Operation");
    }
    printf("%d",result);
    return 0;
}