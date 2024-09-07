#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 150

int main() {
    size_t numNames;
    char **names;
    char temp[MAX_NAME_LENGTH];

    printf("PROGRAM TO CLASSIFY NAMES IN ALPHABETICAL ORDER\n\n");

    printf("Indicate number of names: ");
    if (scanf("%zu", &numNames) != 1 || numNames <= 0) {
        printf("Invalid number of names.\n");
        return 1;
    }

    // Allocate memory for names
    names = (char **)malloc(numNames * sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter names in any order:\n");
    for (size_t i = 0; i < numNames; i++) {
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        scanf("%s", names[i]);
    }

    // Sort names alphabetically
    for (size_t i = 0; i < numNames - 1; i++) {
        for (size_t j = i + 1; j < numNames; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order are:\n");
    for (size_t i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
        free(names[i]); 
    }
    free(names); 

    return 0;
}
