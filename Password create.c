#include<stdio.h>
#include<string.h>
main() {
    char P[2][29];
    int a,b;
    printf("**CODE TO CREATE A PASSWORD**\n\n");
    for(a=1; a<=2; a++) {
        if(a==1) {
            printf("Enter password:\n");
            scanf("%s",P[a]);
        }
        else {
            printf("Confirm password:\n");
            scanf("%s",P[a]);
        }
    }
    for(a=1; a<=2; a++) {
        for(b=a+1; b<=29; b++) {
            if(strcmp(P[a],P[b])==0) {
                printf("Password created successfully!!!\n");
                return 0;
            }
            else if(strcmp(P[a],P[b])>0 || strcmp(P[a],P[b])<0) {
                printf("Passwords do not match!");
                return 0;
            }
        }
    }
}
