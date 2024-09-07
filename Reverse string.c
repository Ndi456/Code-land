#include<stdio.h>
#include<string.h>
main () {
    char Ak[60];
    int s,e;
    printf("CODE TO FIND THE REVERSE OF A NUMBER\n\n");
    printf("Type any number:");
    gets(Ak);
    s=strlen(Ak);
    printf("Reversed number is:");
    for(e=s; e>=0; e--) {
        printf("%c",Ak[e]);
    }
    return 0;
}
