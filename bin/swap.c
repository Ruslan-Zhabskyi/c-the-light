#include <stdio.h>
int swap(int *i, int *j){
    int t;
    t = *i;
    *i = *j;
    *j = t;
    return 0;
}

int main () {
    int i = 1;
    int j = 2;
    swap(&i,&j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}