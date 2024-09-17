#include<stdio.h>
main() {
    int yr;
    printf("Enter year:");
    scanf("%d",&yr);
    if(yr%4==0) {
        printf("%d is a leap year.\n",yr);
        return 0;
    }
    else {
        printf("%d is not a leap year!",yr);
        return 0;
    }
}
