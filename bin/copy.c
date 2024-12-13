#include <string.h>
#include <stdio.h>  

int main() {
    char s1[6]; // Allocate space for 5 characters + null terminator
    char s2[6];
    char s3[6]; // Allocate space for s3

    printf("Enter a 5-character long word:\n");
    fgets(s1, sizeof(s1), stdin);

    strcpy(s2, s1);

    strncpy(s3, s1, 2);


    // Print the results
    printf("This is s2: %s\n", s2);
    printf("This is s3: %s\n", s3);
    printf("This is s1: %s\n", s1);
    return 0;
}
