#include <stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main()
{
    a = 11;
    b = 25;
    printf("% d % d\n", a, b);
    a = func1(5.5);
    func2(12, 15.0);
    printf("% d % d\n", a, b);
    return 0;
}
int func1(float x)
{
    b = b + a;
    printf("% f\n", x);
    func2(5, 4.5);
    return b;
}
void func2(int x, float y)
{
    printf("% d % f\n", x, y);
    return;
}