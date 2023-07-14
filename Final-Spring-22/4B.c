#include <stdio.h>
#include <string.h>

void function(char str[], int code, int n);
void main()
{
    char name[50] = "Abu Sayeed Shiblu";
    function(name, 'A', 0);
}
void function(char str[], int code, int n)
{
    int len = strlen(str);
    printf("%c, ", code);
    int num = code % len;
    if (n > 4)
        return;
    function(str, str[num], ++n);
}