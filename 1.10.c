#include <stdio.h>

int main() {
    int clearanceLevel,age,isActive;
    printf("Enter Level,Age\nisActive | Active=1 or Inactive=0 : ");
    if(scanf("%d %d %d",&clearanceLevel,&age,&isActive) != 3) {
    return 1;
    }
    if (clearanceLevel == 3 && isActive == 1 || age >= 25 && isActive == 1){
        printf("Access Granted");
    }
    else{
        printf("Access Denied");
    }
    return 0;
}