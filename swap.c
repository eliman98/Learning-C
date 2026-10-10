#include <stdio.h>
#include <stdlib.h>

void swap (int *pa, int *pb){ // * = pointer to int a or [a]
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main(){
    int a = 21;
    int b = 17;
    swap(&a,&b); // & = value at mem location
    printf("main: a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}