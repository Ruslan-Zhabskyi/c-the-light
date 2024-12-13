#include <string.h>
#include <stdio.h>  

int main () {
    char s1[5];
    char s2[5];

    printf("Enter 5 character long word.\n");
    fgets(s1, sizeof(s1), stdin);

    strcpy(s2,s1);
    printf("%s\n", s2);
    return 0;
}
