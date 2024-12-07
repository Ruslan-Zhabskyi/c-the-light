#include <stdio.h>

int main (int argc, char *argv[]){
    int c;
    printf("Number of command line argument passed: %d\n", argc);
    for (c = 0; c < argc; c++)
        printf("%d. Command lineargument passed is %s\n", c + 1, argv[c]);
        return 0;
}
