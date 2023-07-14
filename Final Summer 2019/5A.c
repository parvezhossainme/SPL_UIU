#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,*b,*sum;

    // Allocating memory for the pointers
    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));
    sum = (int*) malloc(sizeof(int));

    scanf("%d%d", a,b);

    *sum = *a+*b;
    printf("Sum: %d\n", *sum);

    free(a); free(b); free(sum);    // free heap memory
    return 0;
}