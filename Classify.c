#include<stdio.h>
#include<string.h>
main() {
    char Name[150][150];
    int a,b,x;
    printf("PROGRAM TO CLASSIFY NAMES IN ALPHABETICAL ORDER\n\n\n\n");
    printf("Indicate number of names:");
    scanf("%d",&x);
    char ex[150];
    printf("Enter names in any order:\n");
    for(a=0; a<x; a++) {
        scanf("%s",Name[a]);
    }
    for(a=0;a<x; a++) {
        for(b=a+1;b<x; b++) {
            if(strcmp(Name[a],Name[b])>0) {
                strcpy(ex,Name[a]);
                strcpy(Name[a],Name[b]);
                strcpy(Name[b],ex);
            }
        }
    }
    printf("Names in alphabetical order are:\n");
    for(a=0; a<x; a++) {
        printf("%s\n",Name[a]);
    }
    return 0;
}
