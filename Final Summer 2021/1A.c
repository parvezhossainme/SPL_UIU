#include <stdio.h>
int a,c;
float b;
int func1(float x);
void func2(int *x,float y);

void main(){
    a = 0072%39;
    b = func(a);
    func2(&a,b);
}

int func1(float x){
    c = x + a;
    func2(&c,b);
    return c;
}

void func2(int *x,float y){
    *x *=2;
    y = a;
}