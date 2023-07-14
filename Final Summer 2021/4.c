#include <stdio.h>
int main(){
    
    int b = 72%11;
    int a[5] = {b+1,b+2,b+3,b+4,b+5};
    int *p1,t,u,v,w;
    p1=a;
    t = (*p1)++;
    u = *p1;
    v = *++p1;
    w = *(++p1);
    printf("%d %d %d %d",t,u,v,w);
    return 0;
}