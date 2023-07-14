#include <stdio.h>

void change( int *x, int *y){
    *x = *x+10;     // a = 15
    *y=*y-3;    // b = 6
    return;
}

int main(){

    int a=5,b=9;
    printf("%d %d\n",a,b);          // Output: 5 9
    change(&a,&b);
    printf("%d %d\n",a,b);          // Output: 16 6
    return 0;
}